class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& edges) {
        int N=edges.size();
        vector<vector<int>> adj(n + 1); // adjacency matrix
   
    for (auto &edge: edges) {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
        vector<int>vis(n+1,-1);
        queue<pair<int,int>>q;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==-1)
            {
                vis[i]=1;
                q.push({i,1});
                while(!q.empty())
                {
                    int node=q.front().first;
                    int clr=q.front().second;
                    q.pop();
                    for(auto it: adj[node])
                    {
                        if(vis[it]==-1) {vis[it]=1-clr; q.push({it,1-clr});}
                         if(  vis[it]==clr)
                         return false;
                    }
                }
               
            }
        }
        return true;
    }
};