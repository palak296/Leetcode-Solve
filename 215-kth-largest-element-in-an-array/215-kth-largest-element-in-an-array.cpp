class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> mn;
        for(int i=0;i<nums.size();i++)
        {
            mn.push(nums[i]);
        }
        int n=nums.size()-k;
        while(n--)
        {
            mn.pop();
        }
        return mn.top();
    }
};