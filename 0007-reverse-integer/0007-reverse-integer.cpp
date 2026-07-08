#include<math.h>
class Solution {
public:
    int reverse(int x) {
        
         int rev=0;
         int l=0;
         while(x!=0)
         {  if(rev>INT_MAX/10 || rev<INT_MIN/10)
         return 0;
            l=x%10;
             rev=rev*10+l;
            x=x/10;
         }
         return rev;
    
}
};