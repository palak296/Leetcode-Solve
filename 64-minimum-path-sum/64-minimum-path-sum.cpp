class Solution 
{
  public:
    int minPathSumHelper(vector<vector<int>> &grid,vector<vector<int>> &dp,int m, int n, int i, int j){
        //base case 
        
        if(i==m-1 && j==n-1){
            return grid[i][j];
        }
        if(i>=m || j>=n){
            return INT_MAX; 
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        //recusrive call
        int x = minPathSumHelper(grid,dp,m,n,i+1,j);
        int y = minPathSumHelper(grid,dp,m,n,i,j+1);
        
        //small calculation for recursion
        int ans = min(x,y) + grid[i][j];
        dp[i][j] = ans;
        return ans;
    }
    int minPathSum(vector<vector<int>> &grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n,-1));

       return minPathSumHelper(grid,dp,m,n,0,0);
    }
};