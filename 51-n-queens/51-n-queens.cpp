class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>matrix;
        string s(n,'.');
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
            v[i]=s;
        }
        cal(matrix,v,0,n);
        return matrix;
    }
    void cal(vector<vector<string>>&ans, vector<string>&ds, int col,int n)
    {
        if(col==n){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<n;i++){
            if(safe(i,col,ds,n)){
                ds[i][col]='Q';
                cal(ans,ds,col+1,n);
                ds[i][col]='.';
            }
        }
    }
    bool safe(int row, int col, vector<string>&ds, int n)
  {
    int rr=row;
    int cc=col;
    while(row>=0 and col>=0)
    {
      if(ds[row][col]=='Q') return false;
      row--; col--;
    }
    row=rr;
    col=cc;
    while(col>=0)
    {
      if(ds[row][col]=='Q') return false;
        col--;
    }
    row=rr;
    col=cc;
    while(row<n and col>=0)
    {
      if(ds[row][col]=='Q') return false;
      row++; col--;
    }
    return true;
    
  }
};