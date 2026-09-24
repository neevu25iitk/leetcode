class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> a(matrix.size()*matrix[0].size());
        int up=0;
        int down=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        int index=0;
        int state=0;
        while(index<matrix.size()*matrix[0].size())
        {   
            if(state==0)
            {
            int i=up;
            for(int j=left;j<=right;j++)
            {
                a[index]=matrix[i][j];
                index++;
            }
            up++;
            state=1;
            }
            else if(state==1)
            {
               int j=right;
               for(int i=up;i<=down;i++)
               {
                    a[index]=matrix[i][j];
                    index++;
               } 
               right--;
               state=2;
            }
            else if(state==2)
            {
                int i=down;
                for(int j=right;j>=left;j--)
                {
                    a[index]=matrix[i][j];
                    index++;
                }
                down--;
                state=3;
            }
            else if(state==3)
            {
                int j=left;
                for(int i=down;i>=up;i--)
                {
                    a[index]=matrix[i][j];
                    index++;
                }
                left++;
                state=0;
            }
        }
        return a;
    }
};