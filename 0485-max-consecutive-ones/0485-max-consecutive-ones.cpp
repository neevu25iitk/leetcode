class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int maxs=0;int curr_state=0;int cnt=0;
       for(int i=0;i<=nums.size()-1;i++)
       {
        if(nums[i]==1 && curr_state==1)
        {
            cnt++;
        }
        else if(nums[i]==1 && curr_state==0)
        {
            curr_state=1;
            cnt++;
        }
        else if(nums[i]==0 && curr_state==1)
        {
            curr_state=0;
            maxs=max(maxs,cnt);
            cnt=0;
        }
       } 
       maxs=max(maxs,cnt);
       return maxs;
    }
};