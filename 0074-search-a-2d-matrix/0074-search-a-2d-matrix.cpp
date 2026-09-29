class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low1=0;
        int high1=m-1;
        int low2=0;
        int high2=n-1;
        int mid1=0;
        while(low1<=high1)
        {
            mid1=low1+(high1-low1)/2;
            if(matrix[mid1][0]==target)
            return true;
            else if(matrix[mid1][0]>target)
            high1=mid1-1;
            else
            low1=mid1+1;
        }
        int row=0;
        if(matrix[mid1][0]<target)
        row=mid1;
        else
        row=max(mid1-1,0);
        while(low2<=high2)
        {
            int mid2=low2+(high2-low2)/2;
            if(matrix[row][mid2]==target)
            return true;
            else if(matrix[row][mid2]>target)
            high2=mid2-1;
            else
            low2=mid2+1; 
        }
        return false;
    }
};