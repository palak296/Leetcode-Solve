class Solution {
public:
   
    int climbStairs(int n) {
     vector<int>dp(n+1,-1);
        return f(n,dp);
    }
  int f(int n, vector<int>&dp)
  {
    if(n<0) return 0;
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    else
    return dp[n]=f(n-2,dp)+f(n-1,dp);
  }
};
