class Solution {
public:
    bool canSplit(vector<int>& weights, int days,int mid)
    {
        int subarray_count=1;
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            if(weights[i]>mid)
            {
                return false;
            }
            if(sum+weights[i]<=mid)
            {
                sum+=weights[i];
            }
            else
            {
                subarray_count++;
                sum=weights[i];
            }
        }
        if(subarray_count<=days)
        return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int mx=weights[0];
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
            if(weights[i]>mx)
            mx=weights[i];
        }
        int start=0;
        int end=sum;
        sum=0;
        int ans=INT_MAX;
        while(start<=end)
        {   int mid=(start+end)/2;
            if(canSplit(weights,days,mid))
            {
                ans=min(ans,mid);
                end=mid-1;
            }
            else
            start=mid+1;
        }
        
        return ans;
    }
};