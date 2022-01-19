class Solution {
public:
  void find(int i, int t, vector<vector<int>>&v, vector<int>&ds, vector<int>&c)
  {
    if(i==c.size())
    {
      if(t==0)
      {
        v.push_back(ds);
      }
      return;
    }
    if(c[i]<=t)
    {
      ds.push_back(c[i]);
      find(i,t-c[i],v,ds,c);
      ds.pop_back();
    }
    find(i+1,t,v,ds,c);
    
  }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
      vector<int>ds;
      find(0,target,v,ds,candidates);
      return v;
    }
};