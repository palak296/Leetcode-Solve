class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0,sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(grid[i][j]==1)
                {
                    sum=sum+4;
                    
                    if(i-1>=0 and grid[i-1][j]==1  ) sum--;
                    if(i+1<n and grid[i+1][j]==1 ) sum--;
                   if(j-1>=0 and grid[i][j-1]==1 ) sum--;
                   if(j+1<m and grid[i][j+1]==1 ) sum--;
                    
                    
                }
            }
        
        }
        return sum;
    }
};
