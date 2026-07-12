class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       
       int n=nums.size();
        vector<int> new1(n,0);
        int pos=0;
        int neg=1;
        for(int num : nums)
        {
            if(num<0)
            {
                new1[neg]=num;
                neg+=2;
            }
            else
            {
            new1[pos]=num;
            pos+=2;
            }

        }
       return new1;
    }
};