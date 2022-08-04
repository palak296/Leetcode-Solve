int change(int amount, vector<int>& coins) {
if(amount==0) // Same as above
{
return 1;
}
int n = coins.size();
vector<vector<int>> dp(n, vector<int>(amount+1, 0)); // Initialise the dp
for(int i=0; i<=amount; i++) // In recursion we see that the base cases told us to initialise the dp when row=0
{
dp[0][i] = (i%coins[0]==0); // So we use the base case formula used in recursive solution to initialise
}
for(int i=1;i<n;i++) // Since row 1 is already initialised we start from second row
{
for(int j=0; j<=amount; j++)
{
int dontpick = dp[i-1][j]; // We write the same steps of memoisation, just in the form of tabulation indices
int pick = 0;
if(coins[i]<=j)
{
pick = dp[i][j-coins[i]];
}
dp[i][j] = dontpick + pick;
}
}
return dp[n-1][amount]; // We return the last cell of the grid where the total combinations are stored
}
​