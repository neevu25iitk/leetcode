class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
      int count0=0;
      int count1=0;
      int count2=0;
      for(int i=0;i<stones.size();i++)
      {
        if(stones[i]%3==0)
        count0++;
        else if(stones[i]%3==1)
        count1++;
        else
        count2++;
      }  
      if(count1==0 && count2==0)
      return false;
      if(count1>0 && count2>0 && count0%2==0)
      return true;
      if(abs(count1-count2)>2 && count0%2!=0)
      return true;
      return false;
    }
};