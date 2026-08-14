class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        if(n>m)
        {
        swap(nums1,nums2);
        swap(n,m);
        }
        int left=0;
        int right=n;
        int mid=(m+n+1)/2;
        int max_left1=0;
        int min_right1=0;
        int max_left2=0;
        int min_right2=0;
        while(left<=right)
        {
            int partition1=(left+right)/2;
            int partition2=mid-partition1;
            int max_left1=(partition1==0)?INT_MIN:nums1[partition1-1];
            int min_right1=(partition1==n)?INT_MAX:nums1[partition1];
            int min_right2=(partition2==m)?INT_MAX:nums2[partition2];
            int max_left2=(partition2==0)?INT_MIN:nums2[partition2-1];
            if(max_left1<=min_right2 && max_left2<=min_right1)
            {
                if((m+n)%2==0)
                {
                    return (max(max_left1,max_left2)+min(min_right1,min_right2))/2.0;
                }
                else
                {
                    return max(max_left1,max_left2);
                }
            }
                else if(max_left1>min_right2)
                {
                    right=partition1;
                }
                else
                {
                    left=partition1+1;
                }
            }
            return 0.0;
        }
        
    };