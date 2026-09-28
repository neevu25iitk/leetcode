class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=weights[0];
        int high=weights[0];
        int cap=0;
        for(int i=1;i<weights.size();i++)
        {
            if(weights[i]>low)
            low=weights[i];
            high+=weights[i];
        }
        while(low<=high)
        {
            int mid=(low+high)/2;
            int curr=0;
            int req=1;
            for(int weight:weights)
            {
                if(curr+weight>mid)
                {
                    curr=weight;
                    req++;
                }
                else
                {
                    curr+=weight;
                }
            }

            if(req<=days)
            {
                cap=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return cap;
    }
};