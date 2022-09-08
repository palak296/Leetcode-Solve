​
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
};class Solution {
public:
int minFallingPathSumHelper(vector<vector<int>>& matrix, int r, int c, vector<vector<int>>& dp){
if(r == 0 and c < matrix[0].size() and c >= 0) return matrix[r][c];
if(c >= matrix[0].size() or c < 0) return INT_MAX;
if(dp[r][c] != INT_MAX) return dp[r][c];
return dp[r][c] = matrix[r][c] + min(min(minFallingPathSumHelper(matrix, r-1, c+1, dp), minFallingPathSumHelper(matrix, r-1, c, dp)), minFallingPathSumHelper(matrix, r-1, c-1, dp));
}
int minFallingPathSum(vector<vector<int>>& matrix) {
int rows = matrix.size(), cols = matrix[0].size();
vector<vector<int>> dp(rows+1, vector<int>(cols+1, INT_MAX));
int ans = INT_MAX;
for(int c=0; c < cols; c++){
ans = min(ans, minFallingPathSumHelper(matrix, rows-1, c, dp));
}
return ans;
}
};