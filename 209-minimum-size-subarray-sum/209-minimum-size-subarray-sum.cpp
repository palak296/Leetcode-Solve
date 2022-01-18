class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s=0, sum=0,mn=INT_MAX;
      for(int i=0;i<nums.size();i++)
      {
        sum+=nums[i];
        while(sum>=target)
        {
          mn=min(mn,i-s+1);
          sum=sum-nums[s++];
        }
      }
      return mn==INT_MAX?0:mn;
    }
};