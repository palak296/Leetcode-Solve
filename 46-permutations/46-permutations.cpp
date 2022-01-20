
      class Solution {
public:

  void find( int ind, vector<int>& nums, vector<vector<int>>& s)
  {    
      int n=nums.size();
      if(ind==n)
      {
        s.push_back(nums);
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
      vector<vector<int>>s;
      
      find(0,nums,s);
      
      return s;
      
    }
};