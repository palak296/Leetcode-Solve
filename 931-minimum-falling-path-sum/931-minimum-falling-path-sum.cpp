
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int mn=INT_MAX;
        vector<vector<int>>dp(m+1,vector<int>(n+1,INT_MAX));
         for(int i=0;i<n;i++)
        {
          mn=min(mn,rec(matrix, m-1,i,dp));
         }
        return mn;
    }
    int rec(vector<vector<int>>&matrix, int m, int n,vector<vector<int>>&dp)
    {if(m==0 and n<matrix[0].size() and n>=0) return matrix[m][n];
        if(n>=matrix[0].size() or n<0) return INT_MAX;
        if(dp[m][n]!=INT_MAX) return dp[m][n];
       
              return dp[m][n]=matrix[m][n] + min(min(rec(matrix, m-1, n+1,dp), rec(matrix, m-1, n,dp)), rec(matrix, m-1, n-1,dp));
    }
};