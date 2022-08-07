class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
         int n=prices.size();
        vector<int> ahead(2*k+1,0)  ,  curr(2*k+1,0);
        
        for(int i = n-1 ; i>=0 ; i--){
            for(int j = 2*k-1 ; j>=0 ; j--){
                if(j%2==0)  curr[j] = max( -prices[i] + ahead[j+1]  , ahead[j]);
                else curr[j] = max( prices[i] + ahead[j+1] , ahead[j]);
            }
            ahead = curr;
        }
        return ahead[0];
    }
};
