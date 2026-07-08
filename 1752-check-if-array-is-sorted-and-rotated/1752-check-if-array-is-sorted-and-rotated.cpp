class Solution {
public:
    bool check(vector<int>& nums) {
        vector n=nums;
        sort(n.begin(),n.end());
        int d=0;
        for(int i=0;i<nums.size()-1;i++)
       {
        if(nums[i]>nums[i+1])
        d=i+1;
       }
       for(int i=0;i<nums.size();i++)
      {
        if(n[i]!=nums[(i+d)%nums.size()])
        return false;
      }
      return true;
    }
};