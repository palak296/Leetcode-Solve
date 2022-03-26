class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>v;
      int n=digits.size()-1;
      if(digits[n]<9) 
      {
        for(int i=0;i<n;i++)
          v.push_back(digits[i]);
        v.push_back(digits[n]+1);
        return v;
      }
      int carry=1;
      //v.push_back(0);
      
      int sum;
      for(int i=n;i>=0;i--)
      {
        sum=digits[i]+carry;
        if(sum<=9){
          carry=0;
          
        }
        else
        {
          carry=sum/10;
          sum=sum%10;
          
        }
        v.push_back(sum);
        
      }
      if (carry) v.push_back(1);
reverse(v.begin(), v.end());
      
      
      return v;
      
    }
};