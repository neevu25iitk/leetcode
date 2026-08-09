class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
         vector<int> missing;
        sort(nums.begin(),nums.end());
        int curr=nums[0];
        for(int i=0;i<nums.size();)
            {
                if(nums[i]==curr)
                {
                    curr++;
                    i++;
                }
                else
                {
                    missing.push_back(curr);
                    curr++;
                }
            }
        return missing;
    }
};