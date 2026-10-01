class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low=0;
        int high=mat[0].size()-1;
        vector<int> peak(2,0);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int row=0;
            int l1=(mid+1>mat[0].size()-1)?mat[0].size()-1:mid+1;
            int l2=(row+1>mat.size()-1)?mat.size()-1:row+1;
            for(int i=1;i<mat.size();i++)
            {
                if(mat[i][mid]>mat[row][mid])
                row=i;
            }
            if(mat[row][mid]>=mat[row][max(0,mid-1)] && mat[row][mid]>=mat[row][l1] && mat[row][mid]>=mat[max(0,row-1)][mid] && mat[row][mid]>=mat[l2][mid])
            {
                peak[0]=row;
                peak[1]=mid;
                break;
            }
            else if(mat[row][mid]>=mat[row][max(0,mid-1)] && mat[row][mid]<mat[row][l1])
            {
                low=mid+1;
            }
            else if(mat[row][mid]<mat[row][max(0,mid-1)] && mat[row][mid]>=mat[row][l1])
            {
                high=mid-1;
            }
            else
            {
                if(mat[row][max(0,mid-1)]<mat[row][l1])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
            
        }
        return peak;
    }
};