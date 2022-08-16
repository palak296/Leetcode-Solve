class Solution {
public:
vector res;
​
vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges)
{
vector<int> vis(n,0);
vector<int>adj[n];
for(int i=0;i<edges.size();i++)
{
int u=edges[i][0];a
int v=edges[i][1];
adj[u].push_back(v);
}
for(int i=0;i<n;i++)
{
if(!vis[i])
{
dfs(adj,i,vis);
}
}
for(int i =0;i<n;i++)
{
if (!vis[i])
res.push_back(i);
}
return res;
}
​
void dfs(vector<int> adj[],int i,vector<int> &vis)
{
for(auto it:adj[i])
{
if(!vis[it])
{ vis[it]=1;
dfs(adj,it,vis);
}
}
}
};