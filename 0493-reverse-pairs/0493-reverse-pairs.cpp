class Solution {
public:
    void merge(vector<int>& nums,int low,int mid,int high,int& count)
    {   
        vector<int>temp(high-low+1,0);
        int j=mid+1;
        for(int i=low;i<=mid;i++)
        {   
            while(j<=high && nums[i]>2*(long long)nums[j])
            {
                
                j++;
            }
            count+=j-(mid+1);
        }
        int left=low;
        int right=mid+1;
        int i=0;
        while(left<=mid && right<=high)
        {
            if(nums[left]>=nums[right])
            {
                temp[i]=nums[right];
                i++;
                right++;
            }
            else
            {
                temp[i]=nums[left];
                i++;
                left++;
            }
        }
        while(left<=mid)
        {
            temp[i]=nums[left];
            left++;
            i++;

        }
        while(right<=high)
        {
            temp[i]=nums[right];
            right++;
            i++;
            
        }
        for(int j=0;j<=high-low;j++)
        {
            nums[low+j]=temp[j];
        }
    }
    void mergesort(vector<int>&nums,int low,int high,int& count)
    {
        if(low==high) return ;
        int mid=(low+high)/2;
        mergesort(nums,low,mid,count);
        mergesort(nums,mid+1,high,count);
        merge(nums,low,mid,high,count);

    }
    int reversePairs(vector<int>& nums) {
        int count=0;
        mergesort(nums,0,nums.size()-1,count);
        return count;

    }
};