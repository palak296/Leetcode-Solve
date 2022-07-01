class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        sort(c.begin(),c.end());
            vector<vector<int>>ans;
        vector<int>ds;
        int n=c.size();
        cal(c,target,0,ds,n,ans);
        return ans;
    }
    void cal(vector<int>&c, int target, int i, vector<int>&ds,int n, vector<vector<int>>&ans)
    {
        if(i==n)
        {
            if(target>0) return;
            ans.push_back(ds);
            return;
        }
        if(target<0) return;
        ds.push_back(c[i]);
        cal(c,target-c[i],i,ds,n,ans);
        ds.pop_back();
        cal(c,target,i+1,ds,n,ans);
    }
};