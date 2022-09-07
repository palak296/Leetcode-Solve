class Solution {
public:
    void bfs(vector<vector<int>>& image,int sr, int sc, int newColor,int n,int m)
    {
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int color=image[sr][sc];
        image[sr][sc]=newColor;
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
               int newX=x+dx[i];
               int newY=y+dy[i];
               if(newX>=0 && newY>=0 && newX<n && newY<m && image[newX][newY]==color)
               {
                   q.push({newX,newY});
                   image[newX][newY]=newColor;
               }
                   
            }
            
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size();
        int m=image[0].size();
        if(image[sr][sc]!=newColor)
        bfs(image, sr, sc,  newColor,n,m);
        return image;
    }
};