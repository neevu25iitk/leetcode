class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // int low=0;
        // int high=nums.size()-1;
        // int k=0;
        // int mid=0;
        // while(low<=high)
        // {
        //     mid=(low+high)/2;
        //     if(nums[mid]>nums[nums.size()-1] && )
        //     {
        //         k=nums.size()-mid-1;
        //         low=mid+1;
        //     }
        //     else
        //     {
        //         high=mid-1;
        //     }

        // }
    
        // if(nums[0]>target)
        // {
        //     low=nums.size()-k;
        //     high=nums.size()-1;
        //     while(low<=high)
        //     {
        //         mid=(low+high)/2;
        //         if(nums[mid]==target)
        //         return true;
        //         else if(nums[mid]<target)
        //         low=mid+1;
        //         else
        //         high=mid-1;
        //     }
        // }
        // else
        // {
        //     low=0;
        //     high=nums.size()-k-1;
        //     while(low<=high)
        //     {
        //         mid=(low+high)/2;
        //         if(nums[mid]==target)
        //         return true;
        //         else if(nums[mid]<target)
        //         low=mid+1;
        //         else
        //         high=mid-1;
        //     }
        // }
        // return false;

        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            return true;
        }
        return false;
    }
};