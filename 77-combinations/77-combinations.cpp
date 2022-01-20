class Solution {
public:
 void find(int i,vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans, int k,int n)
  {
   if(i==n){
    if(ds.size()==k )
    {
      //for(int j=0;j<ds.size();j++) cout<<ds[i]<<" ";
      ans.push_back(ds);
    }
     return;
   }
   if(i<n){
  //cout<<nums[i]<<" ";
    ds.push_back(nums[i]);
    find(i+1,ds,nums,ans,k,n);
    ds.pop_back();
    find(i+1,ds,nums,ans,k,n);
   }
    
  }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
      vector<int>ds;
      vector<int>nums;
      for(int i=1;i<=n;i++)
      {
        nums.push_back(i);
      }
      find(0,ds,nums,ans,k,n);
      return ans;
    }
};