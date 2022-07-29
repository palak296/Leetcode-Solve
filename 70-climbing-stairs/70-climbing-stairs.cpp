vector<int>dp(100001,-1);
class Solution {
public:
    
    int climbStairs(int n) {
        
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        else
       return dp[n]=climbStairs(n-1)+climbStairs(n-2);
       
    }
};