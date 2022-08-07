class Solution {
public:
int dp[10005];
bool solve(vector<int>& nums, int n, int idx){
if(idx==n-1) return true;
if(idx>=n) return false;
if(!dp[idx]) return dp[idx];
for(int i=1;i<=nums[idx];i++){
if(solve(nums,n,idx+i)) return dp[idx] = true;
}
return dp[idx] = false;
}
bool canJump(vector<int>& nums) {
int n = nums.size();
memset(dp,-1,sizeof(dp));
return solve(nums,n,0);