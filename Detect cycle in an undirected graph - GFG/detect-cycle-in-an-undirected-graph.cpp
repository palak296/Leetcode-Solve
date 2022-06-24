// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,0);
         for(int i=0; i<V; i++)
       {
           if(vis[i] == 0)
           {
               if(c(i, adj, vis))
                   return true;
           }
       }
       return false;
   }
   bool c(int n, vector<int>adj[], vector<int>&vis)
   {
        queue<pair<int,int>>q;
        q.push({n,-1});
        vis[n]=1;
        while(!q.empty())
        {
            int n=q.front().first;
            int p=q.front().second;
            q.pop();
            
            for(auto it: adj[n])
            {
                if(vis[it]==0)
                {
                    q.push({it,n});
                    vis[it]=1;
                    
                }
                else {if(it!=p and vis[it]==1) return true;}
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends