class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> index(2,-1);
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                index[0]=mid;
                if(mid-1>=0 && nums[mid-1]==nums[mid])
                high=mid-1;
                else
                break;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
         low=0;
         high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                index[1]=mid;
                if( mid+1<nums.size() && nums[mid+1]==nums[mid])
                low=mid+1;
                else
                break;
                
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    return index;
    }
};