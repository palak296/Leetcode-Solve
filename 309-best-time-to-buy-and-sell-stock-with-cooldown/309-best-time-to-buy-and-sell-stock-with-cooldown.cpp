class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return rec(prices,0,1,dp);
    }
    int rec(vector<int>&prices,int i,int buy,vector<vector<int>>&dp)
    {
        if(i>=prices.size()) return 0;
        int profit;
        if(dp[i][buy]!=-1) return dp[i][buy];
        if(buy==1){
            profit=max(-prices[i]+rec(prices,i+1,0,dp),rec(prices,i+1,1,dp));}
        else profit=max(prices[i]+rec(prices,i+2,1,dp),rec(prices,i+1,0,dp));
        
        return dp[i][buy]=profit;
    }
};