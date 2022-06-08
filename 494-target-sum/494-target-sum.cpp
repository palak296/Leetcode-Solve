class Solution {
public:
    int noOfWays(vector<int>&nums, vector<vector<int>>&dp, int target, int current){
        int x;
        if(target < 0){
            x = -1 * target + 1000;
        }
        else{
            x = target;
        }
        
        if(x > 2000){
            return 0;
        }
        
        if(dp[current][x] != -1){
            return dp[current][x];
        }
        
        dp[current][x] = noOfWays(nums, dp, target + nums[current], current + 1) + noOfWays(nums, dp, target - nums[current], current + 1);
        return dp[current][x];
    }
    
    int findTargetSumWays(vector<int>&nums, int target){
        int len = nums.size();
        vector<vector<int>>dp(len + 1, vector<int>(2001, -1));
        dp[len][0] = 1;
        int i;
        for(i = 1; i <= 2000; i++){
            dp[len][i] = 0;
        }
        return noOfWays(nums, dp, target, 0);
    }
};
