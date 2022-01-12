class Solution {
public:
    int minStartValue(vector<int>& nums) {
      int sum=0;
      int mn=INT_MAX;
      for(int i=0;i<nums.size();i++)
        {
          sum+=nums[i];
          mn=min(sum,mn);
        }
      return max(1-mn,1);
    }
};