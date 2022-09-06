class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        sort(c.begin(),c.end());
            set<vector<int>>ans;
        vector<int>ds;
        int n=c.size();
        cal(c,target,0,ds,n,ans);
        vector<vector<int>>v;
        for(auto it: ans)
        {
            v.push_back(it);
        }
        return v;
    }
    
     void cal(vector<int>&c, int target, int i, vector<int>&ds,int n, set<vector<int>>&ans)
    {
         if(i==n){
       if(target==0) {
           ans.insert(ds);
           
       }
             return;
         }
        if(target<0) return;
           
       
        ds.push_back(c[i]);
        cal(c,target-c[i],i+1,ds,n,ans);
        ds.pop_back();
         int next_index = i;
        while (next_index < c.size() && c[next_index] == c[i])
            next_index++;
        cal(c,target,next_index,ds,n,ans);
    }
};
