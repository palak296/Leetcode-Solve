class Solution {
public:
  void find(int i, int target, vector<int>&c, set<vector<int>>&ans, vector<int>&ds){
    if(i==c.size()){
      if(target==0){
        ans.insert(ds);
      }
      return ;
    }
    if(c[i]<=target){
      ds.push_back(c[i]);
      find(i+1,target-c[i],c,ans,ds);
      ds.pop_back();
    }
    int next_index = i;
        while (next_index < c.size() && c[next_index] == c[i])
            next_index++;
    find(next_index,target,c,ans,ds);
   // ans.assign(a.begin(), a.end());
  }  
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>>ans;
              vector<vector<int> > v;

      vector<int>ds;
              sort(candidates.begin(),candidates.end());

      find(0,target,candidates,ans,ds);
      for(auto x: ans) {
            v.push_back(x);
        }
      return v;
    }
};