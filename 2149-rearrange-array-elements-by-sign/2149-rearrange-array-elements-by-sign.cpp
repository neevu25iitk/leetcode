class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> new1;
        vector<int> new2;
        vector<int> new3;
        for(int num : nums)
        {
            if(num<0)
            new1.emplace_back(num);
            else
            new2.emplace_back(num);

        }
       
        for(int i=0;i<nums.size()/2;i++)
        {
            new3.emplace_back(new2[i]);
            new3.emplace_back(new1[i]);
        }
        return new3;
    }
};