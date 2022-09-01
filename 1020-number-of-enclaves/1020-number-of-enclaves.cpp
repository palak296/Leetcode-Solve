class Solution {
public:
    void dfs(vector<vector<int>>&g, int i, int j)
    {
        
        if(i<0 or j<0 or i>g.size()-1 or j>g[0].size()-1 )
            return ;
        if(g[i][j]!=1) return;
        g[i][j]=0;
        dfs(g,i+1,j);
        dfs(g,i-1,j);
        dfs(g,i,j+1);
        dfs(g,i,j-1);
    }
     int numEnclaves(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        int c = 0;
        for(int i=0;i<n;i++){
            if(g[i][0] == 1){
                dfs(g,i,0);
            }
        }
        for(int i=0;i<m;i++){
            if(g[0][i] == 1){
                dfs(g,0,i);
            }
        }
        for(int i=0;i<n;i++){
            if(g[i][m-1] == 1){
                dfs(g,i,m-1);
            }
        }
        for(int i=0;i<m;i++){
            if(g[n-1][i] == 1){
                dfs(g,n-1,i);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j] == 1){
                    c++;
                }
            }
        }
        return c;
    }
};