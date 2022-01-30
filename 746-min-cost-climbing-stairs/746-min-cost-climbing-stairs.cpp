class Solution {
public:
  
  
  int calc(int i, vector<int>&c,vector<int>&dp)
  {
    if(i>=c.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    else
    return dp[i]=min(calc(i+1,c,dp),calc(i+2,c,dp))+c[i];
    
  }
    int minCostClimbingStairs(vector<int>& cost) {
      int n=cost.size();
      vector<int>dp(n+1,-1);
        return min(calc(0,cost,dp),calc(1,cost,dp));
    }
};