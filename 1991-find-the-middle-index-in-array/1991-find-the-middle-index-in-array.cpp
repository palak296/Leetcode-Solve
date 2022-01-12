class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
vector<int>pf(n);      pf[0]=nums[0];
      int sum=0;
      for(int i=0;i<n;i++)
      {
        sum+=nums[i];
      }
        for(int i=1;i<n;i++)
        {
          pf[i]=pf[i-1]+nums[i];
        }
      int left=0;
    for(int i=0;i<nums.size();i++)
      {
        if(left==sum-pf[i]) {return i; }
        else 
          left=pf[i];
      }
      return -1;
    }
};