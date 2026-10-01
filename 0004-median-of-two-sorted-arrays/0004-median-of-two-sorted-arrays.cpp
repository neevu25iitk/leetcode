class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        if(m>n)
        {
            swap(m,n);
            swap(nums1,nums2);
        }
        int mid=(m+n+1)/2;
        int low=0;
        int high=m;
        int max_left1=0;
        int max_left2=0;
        int min_right1=0;
        int min_right2=0;
        while(low<=high)
        {
            int partiton1=low+(high-low)/2;
            int partiton2=mid-partiton1;
            max_left1=(partiton1==0)?INT_MIN:nums1[partiton1-1];
            max_left2=(partiton2==0)?INT_MIN:nums2[partiton2-1];
            min_right1=(partiton1==m)?INT_MAX:nums1[partiton1];
            min_right2=(partiton2==n)?INT_MAX:nums2[partiton2];
            if(max_left1<=min_right2 && max_left2<=min_right1)
            {
                if((m+n)%2!=0)
                return max(max_left1,max_left2);
                else
                return (max(max_left1,max_left2)+min(min_right1,min_right2))/2.0;
            }
            else if(max_left1>min_right2)
            high=partiton1-1;
            else
            low=partiton1+1;

        }
        return 0.0;

    }
}    ;