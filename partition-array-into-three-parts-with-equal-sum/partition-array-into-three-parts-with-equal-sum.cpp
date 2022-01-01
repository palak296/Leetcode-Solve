class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
      int sum=0;
        for(int i=0;i<arr.size();i++)
        {
          sum=sum+arr[i];
        }
      
      if(sum%3!=0) return false; 
      int parts=0,total=0;
      for(int i=0;i<arr.size();i++)
      {
        total=total+arr[i];
        if(total==(parts+1)*sum/3) parts++;
      }
        return parts>=3;
    }
};
