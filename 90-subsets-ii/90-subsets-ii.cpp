class Solution {
public:
  void find( int i, set<vector<int>>&a, vector<int>&ds, vector<int>& nums){
    int n=nums.size();
    if(i==n){
      a.insert(ds);     return;
    }
    ds.push_back(nums[i]);
    find(i+1,a,ds,nums);
    ds.pop_back();
    int ind=i+1;
      while(ind<n and nums[ind]==nums[i] )
      {
        ind++;
      }
    find(ind,a,ds,nums);
  }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>a;
      vector<vector<int>>v;
      vector<int>ds;
      sort(nums.begin(),nums.end());
      find(0,a,ds,nums);
      for(auto x: a)
      {
        v.push_back(x);
      }
      return v;
      
    }
};