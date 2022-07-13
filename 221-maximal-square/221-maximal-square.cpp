class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
       int r=matrix.size();
        if(r==0 ) return 0;
       int c=matrix[0].size();
         vector<vector<int>>dp(r+1,vector<int>(c+1,0));
        int mx=0;
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(matrix[i-1][j-1]=='1')
                    dp[i][j]=1+min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]});
                 mx=max(dp[i][j],mx);
            }
           
        }
        return mx*mx;
        
    }
};