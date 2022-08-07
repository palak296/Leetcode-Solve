class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        //vector<vector<int>>dp(n+1,vector<int>(2,0));
        vector<int>prev(2,0);
        vector<int>prev2(2,0);
        prev[0]=prev[1]=0;
        
        for(int i=n-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                long profit=0;
                if(buy)
                 profit=max(-prices[i]+prev[0],prev[1]);
                  
                else 
                profit=max(prices[i]+prev[1],prev[0]);
                prev2[buy]=profit;
            }
            prev=prev2;
        }
        return prev[1];
    }
};