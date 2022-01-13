class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s=0,e=0,n=nums.size(),mn=INT_MAX;
      int sum=0;
      for(int i=0;i<n;i++)
      {
        sum+=nums[i];
        while(sum>=target){
          mn=min(mn,i-s+1);
          sum=sum-nums[s++];
        }
          
      }
       return mn == INT_MAX ? 0 : mn;
      
    }
};