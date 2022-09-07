class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>>dup=image;
        int dir[]={-1,0,1,0,-1};
        if(image[sr][sc]!=color)
        {queue<pair<int,int>>q;
        q.push({sr,sc});
       
        int oc=image[sr][sc];
        dup[sr][sc]=color;
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int r=x+dir[i];
                int c=y+dir[i+1];
                if(r>=0 && c>=0 && r<m && c<n && image[r][c]==oc and dup[r][c]!=color)
                {
                    dup[r][c]=color;
                    q.push({r,c});
                    
                }
                
              
            }
        }}
        
        return dup;
    }
};