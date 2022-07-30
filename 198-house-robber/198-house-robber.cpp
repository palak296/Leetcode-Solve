class Solution {
public:
    int rob(vector<int>& v) {
        int n=v.size();
        vector<int>dp(n,-1);
        return rec(v,v.size()-1,dp);
    }
    int rec(vector<int>&v, int i,vector<int>&dp){
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int l=rec(v,i-2,dp)+v[i];
        int r=rec(v,i-1,dp);
        return dp[i]=max(l,r);
    }
};