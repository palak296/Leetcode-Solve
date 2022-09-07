class Solution {
public:
    void bfs(vector<int>&vis, vector<int>adj[], int i)
    {
        vis[i]=1;
        queue<int>q;
        q.push(i);
        while(!q.empty())
        {
            
            int node=q.front();
            q.pop();
            for(auto it: adj[node])
            {
                if(vis[it]==-1)
                { q.push(it); vis[it]=1;}
            }
        }
        
    }
    int findCircleNum(vector<vector<int>>& isconnected) {
        int s=isconnected.size();
        vector<int>adj[s];
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<s;j++)
            {
                if(i!=j and isconnected[i][j]!=0)
                adj[i].push_back(j);
            }
        }
        vector<int>vis(s,-1);
        int c=0;
        for(int i=0;i<vis.size();i++)
        {
           
            if(vis[i]==-1)
            {
                 c++;
                bfs(vis,adj,i);
            }
         }
        return c;
    }
};