class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      int n=arr.size();
      vector<int>pf(n);
      pf[0]=arr[0];
      
        for(int i=1;i<arr.size();i++)
        {
          pf[i]=pf[i-1]+arr[i]        ;
        }
      int sum=pf[n-1];
    
      for(int i=0;i<arr.size();i++)
        {
            for(int j=i+2;j<arr.size();j+=2)
            {
                if(i==0)
                    sum+=pf[j];
                else
                    sum+=(pf[j]-pf[i-1]);
            }
        }
        
      return sum;
    }
  
};