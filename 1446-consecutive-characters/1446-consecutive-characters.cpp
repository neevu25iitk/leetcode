class Solution {
public:
    int maxPower(string s) {
        int max_count=0;
        int count=0;
        int rep_char=s[0];
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==rep_char)
            {
                count++;
            }
            else
            {
                max_count=max(max_count,count);
                count=1;
                rep_char=s[i];
            }
        }
        max_count=max(max_count,count);
        return max_count;
    }
};