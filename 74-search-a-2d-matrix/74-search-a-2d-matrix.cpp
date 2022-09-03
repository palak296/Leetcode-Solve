class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int s=0, e=m*n-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int r=mid/n;
            int c=mid%n;
            if(matrix[r][c]==target) return true;
            else if(matrix[r][c]>target)
                e=mid-1;
            else if(matrix[r][c]<target) s=mid+1;
        }
        return false;
    }
};