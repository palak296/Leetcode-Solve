class Solution {
public:
    int rob(vector<int>& nums) {
        int s;
        int mx=INT_MIN;
         int n=nums.size();
        vector<int>v(n+1,-1);
        s=max(fun(nums,mx,0,v),fun(nums,mx,1,v));
        return s;
    }
    int fun(vector<int>&nums, int mx, int i,vector<int>&v)
    {
        if(i>=nums.size()) return 0;
        mx=nums[i];
       if(v[i]!=-1) return v[i];
            mx=mx+max(fun(nums,mx,i+2,v),fun(nums,mx,i+3,v));
        
        return v[i]=mx;
    }
    
};