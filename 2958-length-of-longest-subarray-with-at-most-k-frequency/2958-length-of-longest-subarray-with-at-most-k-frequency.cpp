class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
     unordered_map<int,int> count;
        int max_length=0;
        int left=0;
        int right=0;
        for(int i=0;i<nums.size();i++)
        {   right++;
            count[nums[i]]++;
            while(count[nums[i]]>k)
            {   
                    
                    count[nums[left]]--;
                    left++;
                

                max_length=max(max_length,right-left);
            }
        }
        
        max_length=max(right-left,max_length);
        return max_length;
    }
};