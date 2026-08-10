class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int t_count=0;
        int f_count=0;
        int freq=0;int left=0;
        int right=0;
        
        int ans=0;
        for(int i=0;i<answerKey.size();i++)
         {   freq++;
            if(answerKey[i]=='T')
            {
                t_count++;
                right++;
            }
            else
            {
                f_count++;
                right++;
            }
             while(f_count>k && t_count>k)
             {
                if(answerKey[left]=='T')
                {
                    t_count--;
                    freq--;
                }
                else
                {
                    f_count--;
                    freq--;
                }
                left++;
                

             }
             
             ans=max(ans,freq);
         }
         ans=max(ans,freq);
         return ans;
    }
};