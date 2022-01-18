class Solution {
public:
  void find(int ind,int t, vector<int>& c, vector<vector<int>>& ans, vector<int>&ds){
    if(ind==c.size()){
      if(t==0){
        ans.push_back(ds);
        
      }
      return ;
      
    }
    if(c[ind]<=t){
      ds.push_back(c[ind]);
    find(ind,t-c[ind],c,ans,ds);
      ds.pop_back();
  }
    find(ind+1,t,c,ans,ds);
  }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
      vector<int>ds;
      find(0,target,candidates,ans,ds);
      return ans;
    }
};