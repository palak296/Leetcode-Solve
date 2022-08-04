class Solution {
public:
    int change(int a, vector<int>& c) {
        if(a==0 ) return 1;
        int n=c.size();
        vector<vector<int>>dp(n,vector<int>(a+1,0));
        for(int i=0; i<=a; i++) 
        {
            dp[0][i] = (i%c[0]==0); 
        }
        for(int i=1;i<n;i++)
        {
            
            for(int j=0; j<=a; j++)
            {
                int dontpick = dp[i-1][j];               int pick = 0;
                if(c[i]<=j)
                {
                    pick = dp[i][j-c[i]];
                }
                dp[i][j] = dontpick + pick;
            }
        }
        return dp[n-1][a];
    }
};