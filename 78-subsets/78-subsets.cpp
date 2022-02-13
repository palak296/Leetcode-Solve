
class Solution {
public:
  void find(int n, vector<int>& nums, vector<int>&v, vector<vector<int>>&ans)
  {
    if(n==nums.size())
    { ans.push_back(v);
    return ;}
      v.push_back(nums[n]);
      find(n+1,nums,v,ans);
      v.pop_back();
      find(n+1,nums,v,ans);
    
  }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
      vector<int>v;
      find(0,nums,v,ans);
        return ans;
    }
};