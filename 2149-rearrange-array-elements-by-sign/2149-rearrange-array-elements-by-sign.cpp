class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> new1;
        vector<int> new2;
        vector<int> new3;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            new1.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            new2.push_back(nums[i]);
        }
        for(int i=0;i<nums.size()/2;i++)
        {
            new3.push_back(new2[i]);
            new3.push_back(new1[i]);
        }
        return new3;
    }
};