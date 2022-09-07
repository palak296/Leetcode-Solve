class Solution {
public:
    bool isvalid(int row,int col,vector<vector<int>>&mat)
    {
        if(row<0 or row>=mat.size() or col<0 or col>=mat[0].size())
        {
            return false;
        }
        return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));           
        vector<vector<int>>dis(n,vector<int>(m,0));          
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({{i,j},0});
                    vis[i][j]=true;
                }else{
                    vis[i][j]=0;
                }
            }
        }
       
        while(!q.empty())
        {
            int row=q.front().first.first;
            int col=q.front().first.second;
            int steps=q.front().second;
            q.pop();
            dis[row][col]=steps;
           
             if(isvalid(row-1,col,mat)==true and vis[row-1][col]==false)
            {
                q.push({{row-1,col},steps+1});
                vis[row-1][col]=true;
            }
            if(isvalid(row+1,col,mat)==true and vis[row+1][col]==false)
            {
                q.push({{row+1,col},steps+1});
                vis[row+1][col]=true;
            }
            if(isvalid(row,col-1,mat)==true and vis[row][col-1]==false)
            {
                q.push({{row,col-1},steps+1});
                vis[row][col-1]=true;
            }
            if(isvalid(row,col+1,mat)==true and vis[row][col+1]==false)
            {
                q.push({{row,col+1},steps+1});
                vis[row][col+1]=true;
            }
        }
        return dis;
    }
};