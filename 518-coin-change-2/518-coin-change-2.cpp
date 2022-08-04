class Solution {
public:
    int change(int a, vector<int>& c) {
        if(a==0 ) return 1;
        int n=c.size();
        vector<vector<int>>dp(n,vector<int>(a+1,0));
        vector<int>prev(a+1); vector<int>cur(a+1);
        for(int i=0; i<=a; i++) 
        {
            prev[i] = (i%c[0]==0); 
        }
        for(int i=1;i<n;i++)
        {
            
            for(int j=0; j<=a; j++)
            {
                int dontpick = prev[j];               int pick = 0;
                if(c[i]<=j)
                {
                    pick = cur[j-c[i]];
                }
                cur[j] = dontpick + pick;
            }
            prev=cur;
        }
        return prev[a];
    }
};