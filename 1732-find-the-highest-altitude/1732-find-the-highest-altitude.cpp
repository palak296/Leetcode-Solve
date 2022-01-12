class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
      int mx=0,sum=0;
      for(int i=0;i<n;i++)
      {
        sum=sum+gain[i];
        mx=max(mx,sum);
      }
      return mx;
    }
};