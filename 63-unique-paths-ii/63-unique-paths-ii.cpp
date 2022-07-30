class Solution {
public:
    int rec(int m, int n,vector<vector<int>>&dp,vector<vector<int>>&o)
    {
        
        if(m==0 and n==0) {
            
            if(o[m][n]==0) return 1;
            else return 0;

            }
        
        if(m<0 or n<0) return 0;
        if(o[m][n]==1) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        int l= rec(m-1,n,dp,o);
        int r=rec(m,n-1,dp,o);
        return dp[m][n]=l+r;
       
    }
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int m=o.size();
        int n=o[0].size();
       
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int d=rec(m-1,n-1,dp,o);
        return d; 
    }
};
