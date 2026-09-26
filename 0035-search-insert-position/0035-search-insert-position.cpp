class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int found=-1;
        int insert=0;
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                found=mid;
                return found;
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
        if(nums[mid]<target)
        {
            return mid+1;

        }
        else return mid;
        


        
       
    }
};