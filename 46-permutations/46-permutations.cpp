
      class Solution {
public:

  void find( int ind, vector<int>& nums, set<vector<int>>& s)
  {    
      int n=nums.size();
      if(ind==n)
      {
        s.insert(nums);
      }
    for(int i=ind;i<n;i++)
    {
      
        swap(nums[ind],nums[i]);
      find(ind+1,nums,s);
        
      swap(nums[ind],nums[i]);
        
        
    }
  }
    vector<vector<int>> permute(vector<int>& nums) 
    {
      vector<vector<int>>ans;
      set<vector<int>>s;
      find(0,nums,s);
      for(auto x: s)
      {
        ans.push_back(x);
      }
      return ans;
      
    }
};