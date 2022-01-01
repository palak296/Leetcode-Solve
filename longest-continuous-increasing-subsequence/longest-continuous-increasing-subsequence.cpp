class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
      int c=1,mx=1;
        for(int i=1;i<nums.size();i++)
        {
          if(nums[i-1]<nums[i] ) {c++;mx=max(c,mx);}
          
          else
          {
            
            c=1;
          }
        }
      return mx;
    }
};