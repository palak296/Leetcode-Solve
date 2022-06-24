// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>id(V,0);
        queue<int> q;
        for(int i=0;i<V;i++)
        {
            for(auto it: adj[i])
            {
                id[it]++;
            }
        }
        for(int i=0;i<id.size();i++)
        {
            if(id[i]==0)
            q.push(i);
        }
        int c=0;
        while(!q.empty())
        {
            int n=q.front();
            q.pop();
            c++;
            for(auto it: adj[n])
            {
                id[it]--;
                if(id[it]==0) q.push(it);
            }
        }
        if(V==c) return false;
        return true;
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