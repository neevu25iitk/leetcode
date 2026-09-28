class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int k=high;
        int mid=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            long long hr=0;
            for(int i=0;i<piles.size();i++)
            {
                hr+=piles[i]/mid;
                if(piles[i]%mid!=0)
                hr++;
            }
            if(hr<=h)
            {
            k=min(mid,k);
            high=mid-1;
            }
            
            else 
            low=mid+1;
        }
        return k;
    }
};