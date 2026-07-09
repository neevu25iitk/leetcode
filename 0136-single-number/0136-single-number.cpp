class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1;int d;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            cnt++;
            else if(nums[i]!=nums[i+1]  && cnt==2)
            {
                cnt=1;
            }
            else
            {
                d=i;
                break;
            }
        }
        return nums[d];
    }
};