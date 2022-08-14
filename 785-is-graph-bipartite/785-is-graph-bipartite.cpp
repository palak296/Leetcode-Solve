class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>vis(n,-1);
       for(int i=0;i<n;i++)
       {
           if(vis[i]==-1)
           {
               if(!bfs(i,graph,vis)) return false;
           }
       }
        return true;
    }
    bool bfs(int node, vector<vector<int>>&graph, vector<int>&vis)
    {
        vis[node]=0;
        queue<pair<int,int>>q;
        q.push({node,0});
            while(!q.empty())
            {
                int n=q.front().first;
                int clr=q.front().second;
                q.pop();
                for(auto it: graph[n])
                {
                    if(vis[it]==-1)
                    {
                        vis[it]=1-clr;
                        q.push({it,1-clr});
                    }
                    else
                    {
                        if(vis[it]==clr) return false;
                    }
                }
            }
        return true;
    }
};