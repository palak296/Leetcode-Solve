
class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int>v(nums.size(),-1);
        return rec(nums,0,v);
    }
    bool rec(vector<int>&nums, int i,vector<int>&v)
    {
        if(i>=nums.size()-1) {  return true;}
        bool flag=false;
        if(v[i]!=-1) return v[i];
        for(int j=1;j<=nums[i];j++)
        {
             if(rec(nums,j+i,v)) return v[i] = true;
        }
        return v[i]=false;
    }
};