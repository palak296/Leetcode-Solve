class Solution {
public:
    void dfs(int node, vector<int>adj[], vector<int>&vis)
    {
       
        for(auto it: adj[node])
        {
            if(vis[it]==-1) 
            {   vis[it]=1; dfs(it,adj,vis);}
        }
    }
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(int i=0;i<edges.size(); i++)
        {
            
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
            
        }
        vector<int>vis(n,-1);
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
             //ans.push_back(i);
                dfs(i,adj,vis);
            }
        }
        for(int i =0;i<n;i++)
    {
        if (vis[i]==-1)
            ans.push_back(i);
    }
        return ans;
    }
};