class Solution {
public:
    int missingInteger(vector<int>& nums) {
     int curr_sum=nums[0];
     int req=0;
    
     for(int i=1;i<nums.size();i++)
     {
        if(nums[i]==nums[i-1]+1)
        {
           curr_sum+=nums[i];
       
        }
        else
        {
            req=max(req,curr_sum);
            curr_sum=0;
            break;
        }
        
    }
    
    req=max(req,curr_sum);
   
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==req)
        req++;
        
    }
    return req;

    }
};