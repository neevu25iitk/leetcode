class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int n=x;
        int l=0;
        if(x<0)
        return false;
        while(x>0)
        {   if(rev>INT_MAX/10 || rev<INT_MIN/10)
            return false;
            l=x%10;
            rev=rev*10+l;
            x=x/10;
        }
        if(rev==n)
        return true;
        else 
        return false;
    }
};