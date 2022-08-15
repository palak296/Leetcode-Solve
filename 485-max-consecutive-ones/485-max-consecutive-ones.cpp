class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1) {c++; mx=max(c,mx);}
            else c=0;
        }
            return mx==INT_MIN?0:mx;
    }
};