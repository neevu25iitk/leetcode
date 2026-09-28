class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        int i=0;
        int n=1;
        while( i<=arr.size()-1 && count<k)
        {
            if(n!=arr[i])
            {
                n++;
                count++;
        
            }
            else
            {
                n++;
                i++;
            }
        }

        return n+(k-count)-1;
    }
};