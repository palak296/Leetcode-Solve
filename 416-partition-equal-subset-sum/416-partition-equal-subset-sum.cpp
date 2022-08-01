class Solution {
public:
    bool canPartition(vector<int>& nums) {
       int k= accumulate(nums.begin(),nums.end(),0);
        if(k%2!=0) return false;
        k=k/2;
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        return rec(n-1,k,nums,dp);
    }
    bool rec(int n ,int k, vector<int>&a,vector<vector<int>>&dp)
{
    if(k==0) return true;
    if(n==0) {return a[0]==k;}
      if(dp[n][k]!=-1)return dp[n][k];

 
    bool take=false;
    if(a[n]<=k) take=rec(n-1,k-a[n],a,dp);
    bool nt=rec(n-1,k,a,dp);
    
    return dp[n][k]=nt or take;
}
};