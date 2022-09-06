class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
       return  calc(0,nums,ds,ans);
    }
    vector<vector<int>> calc(int i,vector<int>&nums, vector<int>&ds, vector<vector<int>>&ans)
    {
        if(i==nums.size()) {
            ans.push_back(ds);
            return ans;
        }
        ds.push_back(nums[i]);
        calc(i+1,nums,ds,ans);
        ds.pop_back();
        calc(i+1,nums,ds,ans);
        return ans;
    }
};