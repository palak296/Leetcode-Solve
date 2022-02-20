class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
      sort(in.begin(),in.end());
      int c=1;
      int x1=in[0][0], x2=in[0][1];
        for(int i=1;i<in.size();i++)
        {
          if(in[i][0]>x1 and in[i][1]>x2)
            c++;
          if(in[i][1] > x2) {
                x1 = in[i][0];
                x2 = in[i][1];
            }

        }
      return c;
    }
};