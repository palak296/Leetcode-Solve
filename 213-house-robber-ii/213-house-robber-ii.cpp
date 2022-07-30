class Solution {
public:
    int rec(vector<int>&nums,int n,vector<int>&dp){
        if(n<0) return 0;
        int t,nt;
         if(dp[n]!=-1)
        {
            return dp[n];
        }
            t=rec(nums,n-2,dp)+nums[n];
            nt=rec(nums,n-1,dp);
        
        return dp[n]=max(t,nt);
    }
    int rob(vector<int>& nums) {
        vector<int>n1;
        vector<int>n2;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(i==0) n1.push_back(nums[i]);
            else if(i==n-1) n2.push_back(nums[i]);
            else { n1.push_back(nums[i]); n2.push_back(nums[i]);}
        }
         vector<int> dp1(n1.size() , -1);
        vector<int> dp2(n2.size() , -1);
        return max(rec(n1,n1.size()-1,dp1),rec(n2,n2.size()-1,dp2));
    }
};