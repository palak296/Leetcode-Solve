class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> buckets(10001, 0);
            for (int num : nums) 
                buckets[num] += num;
        
            vector<int> dp(10001, -1);
            dp[0] = buckets[0];
            dp[1] = buckets[1];
        
            for (int i = 2; i < 10001; i++) {
                int take = buckets[i]+dp[i-2];
                int not_take = dp[i-1];
                dp[i] = max(take, not_take);
            }
            
            return dp[10000];
    }
};
