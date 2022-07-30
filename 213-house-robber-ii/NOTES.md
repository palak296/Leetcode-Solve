class Solution {
public:
int rec(vector<int> &v ,int i,vector<int> &dp)
{
if(i>=v.size())
{
return 0;
}
if(dp[i]!=-1)
{
return dp[i];
}
// int m1=
return dp[i] = max(v[i]+rec(v,i+2,dp),rec(v,i+1,dp));
}
int rob(vector<int>& v)
{
if(v.size()==1)
{
return v[0];
}
if(v.size()==0)
{
return 0;
}
vector<int> v1,v2;
int n=v.size();
for(int i=0;i<n;i++)
{
if(i!=0)
{
v1.push_back(v[i]);
}
if(i!=n-1)
{
v2.push_back(v[i]);
}
}
vector<int> dp1(v1.size() , -1);
vector<int> dp2(v2.size() , -1);
return max(rec(v1,0,dp1),rec(v2,0,dp2));
}
};