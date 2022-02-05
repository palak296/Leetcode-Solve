class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
          mp[nums[i]]++;
        }
      int x;
        for(auto it:mp){
          if(it.second > 1) x=it.first;
        }
      return x;
    }
};