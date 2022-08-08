class Solution {
public:
   
    
    int coinChange(vector<int>& coins, int amount) {
       // vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        vector<int>prev(amount+1,0), prev2(amount+1,0);
        int n=coins.size();
        for(int i=0; i<amount+1; i++) prev[i] = INT_MAX-1;
        for(int j=1; j<n+1; j++) prev[0] = 0;
        for(int i=1; i<n+1; i++){
            for(int j=1; j<amount+1; j++){
                if(coins[i-1] <= j){
                    prev[j] = min(1 + prev[j-coins[i-1]], prev[j]);
                }else{
                    prev2[j] = prev[j];
                }
            }
        }
        return (prev[amount] == INT_MAX ||prev[amount] == INT_MAX-1) ? -1 : prev[amount];
        
    }
};