class Solution {
public:
  void find(string ds, vector<string>&ans, int o, int c)
  {
    //int o=2,c=3;
    if(o==0 and c==0)
    {
      ans.push_back(ds);
      return;
    }
    if(o>0)
    find(ds+'(',ans,o-1,c);
    if(o<c)
    find(ds+')',ans,o,c-1);
    
    
  }
    vector<string> generateParenthesis(int n) {
      
      string ds;
      vector<string> ans;
      int o=n,c=n;
      
      find(ds,ans,o,c);
      return ans;
    }
};