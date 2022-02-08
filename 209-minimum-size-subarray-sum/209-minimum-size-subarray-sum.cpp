class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
      int sum=0,j=0,mn=INT_MAX;
      for(int i=0;i<nums.size();i++)
      {
        sum+=nums[i];
        while(sum>=target)
        {
          
          mn=min(mn,i-j+1);
          sum=sum-nums[j++];
         
          
        }
      }
      return mn==INT_MAX?0:mn;
    }
};