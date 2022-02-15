class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int as=0;
      for(auto i: nums)
        as=as^i;
      return as;
    }
};