class Solution {
public:
  void find(int i, vector<int>&ds, vector<vector<int>>& ans, int k, int n)
  {
    if(n<0) return;
    if(k==0)
    {
      if(n==0)
      {
        ans.push_back(ds);
      }
      return;
    }
    if(i>9) return;
    
    ds.push_back(i);
    find(i+1,ds,ans,k-1,n-i);
    ds.pop_back();
    find(i+1,ds,ans,k,n);
  }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
      vector<int>ds;
      find(1,ds,ans,k,n);
      return ans;
    }
};