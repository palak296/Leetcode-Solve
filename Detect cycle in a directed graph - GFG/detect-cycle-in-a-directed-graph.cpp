// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  bool cyclepresent(int i,vector<int>&visited,vector<int>&dfsvis,vector<int>adj[])
    {
        visited[i]=1;
        dfsvis[i]=1;
        
        for(auto u:adj[i])
        {
            if(!visited[u])
            {
              if(cyclepresent(u,visited,dfsvis,adj))
                   return true;
            }
            else if(dfsvis[u])
                   return true;
        }
        dfsvis[i]=0;
        return false;
    }
    
    
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<int>visited(V,0);
        vector<int>dfsvis(V,0);
    
       for(int i=0;i<V;i++)
       {
          if(!visited[i])
          {
             if(cyclepresent(i,visited,dfsvis,adj))
             return true;
          }
       }
       return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends