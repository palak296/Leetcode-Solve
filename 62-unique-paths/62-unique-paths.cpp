
class Solution {
public:
    int rec(int m, int n,vector<vector<int>>&dp)
    {
        if(m==0 and n==0) {
            return 1;}
        
        if(m<0 or n<0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        int l= rec(m-1,n,dp);
        int r=rec(m,n-1,dp);
        return dp[m][n]=l+r;
       
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int d=rec(m-1,n-1,dp);
        return d;
    }
};