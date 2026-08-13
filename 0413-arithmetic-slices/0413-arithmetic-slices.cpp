class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
      int total_count=0;
      int count=2;
      if(nums.size()<3)
      return 0;
      int difference=nums[1]-nums[0];
      
     
      for(int i=2;i<nums.size();i++)
      {
        if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2] && nums[i]-nums[i-1]==difference)
        {
            count++;
        }
        else
        {   if(count>=3)
            total_count+=(count-1)*(count-2)/2;
            count=2;
            difference=nums[i]-nums[i-1];
        }

      } 
      if(count>=3)
            total_count+=(count-1)*(count-2)/2; 
      return total_count;
    }
};