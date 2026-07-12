class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> k;
        int res=0;
        int majority=0;
        for(int n: nums)
        {
            k[n]++;
            if(k[n]>majority)
            {
                res=n;
                majority=k[n];
            }
        }
        return res;
    }
};