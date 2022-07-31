class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        int n=t.size()-1;
        vector<vector<int>>dp(n+1,vector<int>(n,-1));
        return rec(0,n,t,0,dp);
    }
    int rec(int level, int size, vector<vector<int>>&t, int index,vector<vector<int>>&dp)
    {
        if(level==size) return t[level][index];
        if(dp[level][index]!=-1)return dp[level][index];
        int l=rec(level+1,size,t,index,dp)+t[level][index];
        int r=rec(level+1,size,t,index+1,dp)+t[level][index];
        return dp[level][index]=min(l,r);
    }
};