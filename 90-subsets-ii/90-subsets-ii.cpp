class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       vector<vector<int>>ans;
        vector<int>v;
        set<vector<int>>st;
        
        cal(nums,v,st,0,n);
       for(auto x: st)
           ans.push_back(x);
       
        return ans;
    }
    void cal(vector<int>&nums, vector<int>&v, set<vector<int>>&st,int i,int n)
    {
        if(i==n)
        {
            st.insert(v);
            return;
        }
        //cout<<nums[i]<<" ";
        v.push_back(nums[i]);
        cal(nums,v,st,i+1,n);
        v.pop_back();
        cal(nums,v,st,i+1,n);
    }
};