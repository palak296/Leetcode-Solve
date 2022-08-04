class Solution {
public:
    int change(int a, vector<int>& c) {
        int n=c.size();
        vector<vector<int>>dp(n+1,vector<int>(a+1,-1));
        return rec(a,c,n-1,dp);
    }
    int rec(int a, vector<int>&c, int n,vector<vector<int>>&dp)
    {
        if(n==0 ){
            return a%c[0]==0;
        }
       if(dp[n][a]!=-1) return dp[n][a];
        int t=0;
        if(c[n]<=a) t=rec(a-c[n],c,n,dp);
        int nt=rec(a,c,n-1,dp);
        return dp[n][a]=t+nt;
    }
};