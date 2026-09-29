class Solution {
public:
    bool split(vector<int>&nums,int mid,int k)
    {
        int count=1;
        int curr_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>mid)
            return false;
            if(nums[i]+curr_sum<=mid)
            {
                curr_sum+=nums[i];
            }
            else
            {
                curr_sum=nums[i];
                count++;
            }
            

        }
        if(count<=k)
        return true;
        return false;
        
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=0;
        
        for(int i=0;i<nums.size();i++)
        {
            high+=nums[i];
        }
        int min_sum=0;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(split(nums,mid,k))
            {
                min_sum=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            

        }
        
        return min_sum;

    }
};