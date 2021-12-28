class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int mx=0, s=0;
        for(int i=0;i<gain.size();i++)
        {
          s+=gain[i];
          mx=max(mx,s);
        }
      return mx;
    }
};