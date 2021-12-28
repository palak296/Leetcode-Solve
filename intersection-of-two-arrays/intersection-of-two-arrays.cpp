class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& vec) {
      vector<int>s;
      for(int i=0;i<nums1.size();i++)
      {
        if(find(vec.begin(), vec.end(), nums1[i]) != vec.end())
        {if(find(s.begin(), s.end(), nums1[i]) == s.end())
          s.push_back(nums1[i]);}
      }
      
      
      return s;
    }
};