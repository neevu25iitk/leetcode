class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            cnt=cnt^nums[i];
        }
        return cnt;
    }
};