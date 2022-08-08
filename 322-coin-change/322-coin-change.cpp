class Solution {
public:
    int help(vector<int>& coins, int amount, int n,vector<vector<int>>&dp)
    {
        if(amount == 0) return 0;
        if(n < 0 || amount < 0) return INT_MAX-1;
        if(dp[n][amount]!=-1) return dp[n][amount];
        int one = help(coins,amount,n-1,dp);
        int two = 1+help(coins,amount-coins[n],n,dp);
        return dp[n][amount]=min(one,two);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int ans = help(coins,amount,coins.size()-1,dp);
        
        return (ans < INT_MAX-1)?ans:-1;
    }
};