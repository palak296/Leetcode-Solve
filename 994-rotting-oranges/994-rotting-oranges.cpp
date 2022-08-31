class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis=grid;
        int cnt=0;
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2 )
                {   
                 
                   q.push({i,j});
                }
            }
        }
        
        while(!q.empty())
        {
           
            int s=q.size();
            int flag=1;
            for(int i=0;i<s;i++)
            {
                 int r=q.front().first;
                 int c=q.front().second;
                 q.pop();
                
                if(r+1<m and grid[r+1][c]==1 and vis[r+1][c]!=2)
                {
                    vis[r+1][c]=2; q.push({r+1,c}); flag=0;
                }
        if(c+1<n and grid[r][c+1]==1 and vis[r][c+1]!=2)
        {
            vis[r][c+1]=2; q.push({r,c+1}); flag=0;
        }
        if(r-1>=0 and grid[r-1][c]==1 and vis[r-1][c]!=2)
        {
            vis[r-1][c]=2; q.push({r-1,c}); flag=0;
        }
        if(c-1>=0 and grid[r][c-1]==1 and vis[r][c-1]!=2)
        {
            vis[r][c-1]=2; q.push({r,c-1}); flag=0;
        }
                 
            }if(flag==0) {cout<<flag; cnt++;}
           
            
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               // cout<<vis[i][j]<<" ";
                if(vis[i][j]==1) return -1;
            }
            cout<<endl;
        }
        return cnt;
    }

    
};