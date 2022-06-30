class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy=INT_MAX;
        int p=0;
        for(int i=0;i<prices.size();i++)
        {
            buy=min(buy,prices[i]);
            p=max(p,prices[i]-buy);
        }
        return p;
    }
};