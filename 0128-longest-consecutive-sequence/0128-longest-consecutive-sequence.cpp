class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        sort(nums.begin(),nums.end());
        int cnt=1;
        int maxs=0;
        int curr=nums[0];

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]-curr==1)
            {
                cnt++;
                curr=nums[i];
            }
            else if(nums[i]-curr==0)
            {
                curr=nums[i];
            }
            else
            {
               curr=nums[i];
               maxs=max(maxs,cnt);
               cnt=1;
            }
        }
        maxs=max(maxs,cnt);
        return maxs;
    }
};