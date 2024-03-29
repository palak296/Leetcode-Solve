// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
bool dfs(vector<int> adj[], vector<int> &vis, int i)
{
    if(vis[i]==-1)vis[i] = 0;
    for (auto it : adj[i])
    {
        if (vis[it] == -1)
        {
            vis[it] = 1 - vis[i];
            if (!dfs(adj, vis, it))
                return false;
        }
        else if (vis[it] == vis[i])
            return false;
    }
    return true;
}
	bool isBipartite(int v, vector<int>adj[]){
	    vector<int> vis(v, -1);
    for (int i = 0; i < v; i++)
    {
        if (vis[i] == -1)
        {
            if (!dfs(adj, vis, i))
                return false;
        }
    }
    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends