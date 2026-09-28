class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size())
        return -1;
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int low=1;
        int days=high;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int prev_state=0;
            int bouquets=0;
            int flowers=0;
            for(int i=0;i<bloomDay.size();i++)
            {
                if(bloomDay[i]<=mid)
                {
                flowers++;
                if(flowers==k)
                {
                    bouquets++;
                    flowers=0;
                }
                }
                else
                {
                    flowers=0;
                }
            }
            if(bouquets<m)
            low=mid+1;
            else
            {
                days=min(mid,days);
                high=mid-1;
            }
        }
        return days;
    }
};