class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>>ans;
      vector<int>v;
      func(c,t,ans,v,0);
     return ans;
    }
  void func(vector<int>& c,int t, vector<vector<int>>&ans ,vector<int>& v, int i)
  {
    if(i==c.size())
    {
      if(t==0)
      {
        ans.push_back(v);
        
      }
      return;
    }
    
    if(c[i]<=t)
    {
      v.push_back(c[i]);
      func(c,t-c[i],ans,v,i);
        v.pop_back();
    }
    func(c,t,ans,v,i+1);
    
  }
};