class Solution {
public:
  void find(int i, set<vector<int>>&s, vector<int>&ds, vector<int>&nums){
    int n=nums.size();
    if(i==n) {
      s.insert(ds);;
      return;
    }
    ds.push_back(nums[i]);
    find(i+1,s,ds,nums);
    ds.pop_back();
    find(i+1,s,ds,nums);
  }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
      set<vector<int>>s;
      vector<int>ds;
      find(0,s,ds,nums);
      for(auto x: s){
        v.push_back(x);
      }
      return v;
    }
};