class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xor_sum=nums[0];
        long long sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
        xor_sum=xor_sum^nums[i];
        sum+=nums[i];
        }
        if(sum!=0)
        {
        if(xor_sum!=0)
        return nums.size();
        return nums.size()-1;
        }
        else
        return 0;
    }
};