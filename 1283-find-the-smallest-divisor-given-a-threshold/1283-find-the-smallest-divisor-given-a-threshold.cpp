class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high=*max_element(nums.begin(),nums.end());
        int low=1;
        int div=high;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int sum=0;
            for(int num:nums)
            {
                sum=sum+(num+mid-1)/mid;
            }
            if(sum>threshold)
            {
                low=mid+1;
            }
            else
            {   
                div=mid;
                high=mid-1;
            }
        }
        return div;
    }
};