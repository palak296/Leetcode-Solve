class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      
      int zc=count(nums.begin(),nums.end(),0);
      if(zc>1) return vector<int>(nums.size());
      int p=1;
        vector<int>ans(nums.size());
      for(int i=0;i<nums.size();i++)
      {
        if(nums[i]!=0)
        p=nums[i]*p;
      }
      for(int i=0;i<nums.size();i++)
      {
        if(zc!=0){
        if(nums[i]!=0) {ans[i]=0;}
        else ans[i]=p;
        }
        else
        ans[i]=p/nums[i];
        
      }
      return ans;
    }
};
   