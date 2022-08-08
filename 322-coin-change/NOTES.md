class Solution {
public:
int help(vector<int>& coins, int amount, int n)
{
if(amount == 0) return 0;
if(n < 0 || amount < 0) return INT_MAX-1;
int one = help(coins,amount,n-1);
int two = 1+help(coins,amount-coins[n],n);
return min(one,two);
}
int coinChange(vector<int>& coins, int amount) {
int ans = help(coins,amount,coins.size()-1);
return (ans < INT_MAX-1)?ans:-1;
}
};