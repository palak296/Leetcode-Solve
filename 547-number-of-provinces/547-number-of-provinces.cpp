class Solution {
public:
    void bfs(vector<int>&vis,vector<int> adj[],int n,int i){
        vis[i]=0;
        queue<int>q;
        q.push(i);
        while(!q.empty())
        {
            auto n=q.front();
            q.pop();
            for(auto i: adj[n])
            {
                if(vis[i]==-1)
                {
                    q.push(i);
                    vis[i]=0;
                }
            }
                
        }
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
         int n = isConnected.size();
        vector<int> adj[n];
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(i!=j && isConnected[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }
        int c=0;
        vector<int> vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                c++;
                bfs(vis,adj,n,i);
            }
        }
        return c;
        
    }
    
};