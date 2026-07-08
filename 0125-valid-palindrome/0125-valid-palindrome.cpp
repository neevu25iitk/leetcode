class Solution {
public:
    bool isPalindrome(string s) {
       if(s=="")
       return true;
        string d;
        int c=0;
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            if(isalnum(s[i]))
{
    d+=tolower(s[i]);
    c++;
}
        }

       for(int i=0;i<c/2;i++)
       {
        if(d[i]!=d[c-i-1])
        return false;
       }
       return true;
    }
     
   

};