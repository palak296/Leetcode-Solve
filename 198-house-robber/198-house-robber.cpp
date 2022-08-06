class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
          if(size(nums) == 1) return nums[0];
        int prev2=nums[0],  prev=max(nums[0],nums[1]),cur;
        int take, notake;
        for(int i=2;i<n;i++)
        {
             take=nums[i]+prev2;
        
         notake=prev;
            cur=max(take,notake);
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
};