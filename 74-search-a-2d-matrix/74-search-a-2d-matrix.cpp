class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
      int r=m.size();
      int c=m[0].size();
      int s=0, e=(r*c)-1;
      int mid, midv;
      while(s<=e)
      {
         mid=s+(e-s)/2;
        midv=m[mid/c][mid%c];
        if(midv>target)
          e=mid-1;
        else if(midv<target) s=mid+1;
        else return true;
      }
      return false;
    }
};