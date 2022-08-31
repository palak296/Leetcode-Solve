class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>vis=image;
        int m=image.size();
        int n=image[0].size();
        
               dfs(sr,sc,vis,image,image[sr][sc],color);
           
        return vis;
    }
    void dfs(int sr,int sc, vector<vector<int>>&vis, vector<vector<int>>&image,int oc, int tc)
    {
       // cout<<sr<<" "<<sc<<" ";
        if(sr<0 or sc<0 or sr>=image.size() or sc>=image[0].size() or image[sr][sc]!=oc) return;
        if(image[sr][sc]==oc and vis[sr][sc]!=tc)
        {
            
            vis[sr][sc]=tc;
           dfs(sr+1,sc,vis,image,oc,tc);
             dfs(sr-1,sc,vis,image,oc,tc); 
            dfs(sr,sc+1,vis,image,oc,tc);
             dfs(sr,sc-1,vis,image,oc,tc);
            
        }
        
         
    }
};