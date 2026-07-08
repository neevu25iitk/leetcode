class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left=0;
        int ans=0;
       long  long curr=0;
        for(int i=0;i<nums.size();i++)
       { 
        
           curr+=nums[i];
           while((((long long)i-left+1)*nums[i])-curr>k)
           {
            curr=curr-nums[left];
            left++;
           }
           ans=max(ans,i-left+1);
        }
        return ans;
    }
};