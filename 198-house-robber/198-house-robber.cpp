class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
          if(size(nums) == 1) return nums[0];
        vector<int>dp(n);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        
        int take, notake;
        for(int i=2;i<n;i++)
        {
             take=nums[i]+dp[i-2];
        
         notake=dp[i-1];
            dp[i]=max(take,notake);
        }
        return dp[n-1];
    }
};