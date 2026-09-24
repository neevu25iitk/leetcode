class Solution {
public:
    int partition(vector<vector<int>>& intervals,int low,int high)
    {
        int pivot=intervals[low][0];
        int i=low;
        int j=high;
        while(i<j)
        {
            while(intervals[i][0]<=pivot && i<=high-1)
            i++;
            while(intervals[j][0]>=pivot &&j>=low+1)
            j--;
            if(i<j)
            {
            swap(intervals[i][0],intervals[j][0]);
            swap(intervals[i][1],intervals[j][1]);
            }
        }
        swap(intervals[low][0],intervals[j][0]);
        swap(intervals[low][1],intervals[j][1]);
        return j;

    }
    void qs(vector<vector<int>>&intervals,int low ,int high)
    {
        if(low<high)
        {
            int p=partition(intervals,low,high);
            qs(intervals,low,p-1);
            qs(intervals,p+1,high);
        }
    }
    void quicksort(vector<vector<int>> &intervals)
    {
        qs(intervals,0,intervals.size()-1);
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        quicksort(intervals);
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=intervals[i-1][1])
            {
                intervals[i][0]=intervals[i-1][0];
                intervals[i][1]=max(intervals[i][1],intervals[i-1][1]);
                intervals.erase(intervals.begin()+i-1);
                i--;
            }
        }
        return intervals;
        
    }
};