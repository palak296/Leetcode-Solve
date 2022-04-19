class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      
      int j=nums.size()-1;
      int i=0;
      int c=0;
     while(i<=j)
      {
        if(nums[i]==val){
          c++;
          swap(nums[i],nums[j]);
        j--;
        }
       else
        i++;
      
      }
      return nums.size()-c;
        
    }
};