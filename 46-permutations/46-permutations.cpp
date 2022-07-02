class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int i=1;
        vector<vector<int>>ans;
        dfs(0,nums,ans);
        return ans;
        
    }
    // void cal(vector<int>&v, int i ,vector<vector<int>>&ans)
    // {
    //     if(i==v.size()-1)
    //     {
    //         swap(v[0],v[i]);
    //         ans.push_back(v);
    //         return;
    //     }
    //     swap(v[i],v[i-1]);
    //     cal(v,i+1,ans);
    //     swap(v[i],v[i-1]);
    //     cal(v,i+1,ans);
    // }
      void dfs(int pos, vector<int> &num, vector<vector<int>> &result){
    if(pos == num.size()){
        result.push_back(num);
    }
    else{
        for(int i=pos; i<num.size(); i++){
            swap(num[i], num[pos]);
            dfs(pos+1, num, result);
            swap(num[i], num[pos]);
        }
    }
      }
};
