class Solution {
public:
    
    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        return rec(n,dp);
    }
    int rec(int n, vector<int>&dp){
        if(n<=1) return n;
        if(n==2) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=rec(n-1,dp)+rec(n-2,dp)+rec(n-3,dp);
    }
};