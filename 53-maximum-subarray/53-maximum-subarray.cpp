class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            mx=max(sum,mx);
            if(sum<0) sum=0;
        }
        return mx;
    }
};