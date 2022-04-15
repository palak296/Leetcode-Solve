class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a=nums1.size()-m;
      while(a--)
      {
        nums1.pop_back();
      }
      for(int i=0;i<nums2.size();i++)
      {
        nums1.push_back(nums2[i]);
      }
    
       sort(nums1.begin(),nums1.end());
    }
};