class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        
        int r=m.size();
        int c=m[0].size();
        int h=(r*c)-1;
        int l=0;
        while(l<=h)
        {
            int mid=l+h-1/2;
            int midv=m[mid/c][mid%c];
            if(midv==t) return true;
            else if(midv<t) l=mid+1;
            else h=mid-1;
        }
        return false;
    }
};