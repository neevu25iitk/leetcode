class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp;
        for(int i=nums.size()-1;i>=1;i--)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]==0 && nums[j+1]!=0)
                {
                 nums[j]=nums[j+1];
                 nums[j+1]=0;
                }
            }
        }
    }
};