class Solution {
public:
    bool canSplit(vector<int>& nums, int k,int mid)
    {
        int subarray_count=1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>mid)
            {
                return false;
            }
            if(sum+nums[i]<=mid)
            {
                
                sum+=nums[i];
            }
            else
            {
                subarray_count++;
                sum=nums[i];
            }
        }
        if(subarray_count<=k) return true;
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int sum=0;
        int mx=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(nums[i]>mx) mx=nums[i];
        }
        int start=0;
        int end=sum;
        int ans=INT_MAX;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(canSplit(nums,k,mid))
            {   ans=min(ans, mid);
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};