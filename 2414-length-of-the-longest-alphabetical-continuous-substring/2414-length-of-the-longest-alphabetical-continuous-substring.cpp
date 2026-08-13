class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count=0;
        int max_count=0;
        char check=s[0];
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==check)
            {
                count++;
                check++;
            }
            else
            {
                max_count=max(max_count,count);
                count=1;
                check=s[i]+1;
            }
        }
        max_count=max(max_count,count);
        return max_count;
    }
};