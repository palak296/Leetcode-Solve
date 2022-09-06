class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
         calc(k,n,1,ans,ds);
        return ans;
    }
    void calc(int k, int n, int i, vector<vector<int>>&ans, vector<int>&ds)
    {if(k == 0){
            if(n == 0){
                ans.push_back(ds);
            }
            return;
        }
     if(i>9) return;
        ds.push_back(i);
        calc(k-1,n-i,i+1,ans,ds);
        ds.pop_back();
        calc(k,n,i+1,ans,ds);
        return;
    }
};