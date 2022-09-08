class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size() == 1) return nums[0];
        vector<int>v1,v2;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0) v2.push_back(nums[i]);
            if(i!=nums.size()-1) v1.push_back(nums[i]);
        }
        return max(rec(v1),rec(v2));
    }


    int rec(vector<int>& nums) {
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