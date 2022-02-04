class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    for(int i=0;i<nums.size();i++)
    {
      if(nums[i]==0) nums[i]=-1;
    }
    int pre = 0;
      int len=0;
      unordered_map<int,int>m;
        for(int i = 0; i < nums.size(); i++){
            pre += nums[i];
			
        if(pre==0) len=i+1;
        if(m.find(pre)==m.end())
          m.insert({pre,i});
        else len=max(len,i-m[pre]);
      }
      return len;
    }
};