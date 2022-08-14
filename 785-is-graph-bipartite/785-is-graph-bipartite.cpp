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
        vis[node]=1;
        queue<int>q;
        q.push(node);
            while(!q.empty())
            {
                int n=q.front();
                
                q.pop();
                for(auto it: graph[n])
                {
                    if(vis[it]==-1)
                    {
                        vis[it]=1-vis[n];
                        q.push(it);
                    }
                    else if(vis[it]==vis[n]) return false;
                    
                }
            }
        return true;
    }
};