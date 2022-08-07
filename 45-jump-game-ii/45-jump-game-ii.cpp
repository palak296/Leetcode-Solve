class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return rec(nums,0,dp);
    }
    int rec(vector<int>&nums, int i,vector<int>&dp)
    {
        if(i>=nums.size()-1) return 0;
         int mn=1e9;
        if(dp[i]!=-1) return dp[i];
        for(int ind=1;ind<=nums[i];ind++)
        {
            int take=1+rec(nums,ind+i,dp);
            mn=min(mn,take);  
           dp[i]=mn;
        }
        return dp[i]=mn;
    }
};