class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,mn=INT_MAX,s=0;
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