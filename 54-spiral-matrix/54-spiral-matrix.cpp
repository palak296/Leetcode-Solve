class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0,bottom=n-1, left=0, right=m-1;
        int c=0,tn=m*n;
        vector<int>a;
        while(c<tn)
        {
            for(int i=left;i<=right and c<tn;i++)
            {
                a.push_back(matrix[top][i]);
                c++;
            }
            top++;
            for(int i=top;i<=bottom and c<tn;i++)
            {
                a.push_back(matrix[i][right]);
                c++;
            }
            right--;
            for(int i=right;i>=left and c<tn;i--)
            {
                a.push_back(matrix[bottom][i]);
                c++;
            }
            bottom--;
            for(int i=bottom;i>=top and c<tn;i--){
                a.push_back(matrix[i][left]);
                c++;
            }
            left++;
        }
        return a;
    }
};