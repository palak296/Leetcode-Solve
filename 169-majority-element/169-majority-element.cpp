class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      int s=nums.size();
      return nums[s/2];
    }
};