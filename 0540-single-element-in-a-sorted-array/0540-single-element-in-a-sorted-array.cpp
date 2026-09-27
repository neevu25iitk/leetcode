class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        if(nums.size()>=3)
        {
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(high-low>2)
            {
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
            return nums[mid];
            else if(nums[mid]==nums[mid-1] && (mid-low+1)%2==0)
            low=mid+1;
            else if(nums[mid]==nums[mid-1] && (mid-low+1)%2!=0)
            high=mid;
            else if(nums[mid]==nums[mid+1] && (high-mid+1)%2==0)
            high=mid-1;
            else
            low=mid;
            }
            else
            {
                if(nums[mid]==nums[mid+1])
                return nums[mid-1];
                else if(nums[mid]==nums[mid-1])
                return nums[mid+1];
                else
                return nums[mid];
            }

        }
        }
        else
        return nums[0];
        return 0;
    }
};