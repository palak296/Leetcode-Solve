class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int s=graph.size();
        vector<int>vis(s,-1);
        queue<int>q;
        for(int i=0;i<s;i++)
        {
            if(vis[i]==-1){
                
        q.push(i);
        vis[i]=0;
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
                else 
                    if(vis[it]==vis[n]) return false;
            }
        }
            }
        }
       
        return true;
    }
   
};