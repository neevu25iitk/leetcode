class Solution {
public:
    int prod(int n)
    {
        int prod1=1;
        
        while(n!=0)
        {
            prod1=prod1*(n%10);
            n=n/10;
        }
        return prod1;
    }
    int smallestNumber(int n, int t) {
        int n1=n;
    
        while(true)
        {
            if(prod(n1)%t==0)
            return n1;
            else
            n1++;
        }
        return 0;
    }
};