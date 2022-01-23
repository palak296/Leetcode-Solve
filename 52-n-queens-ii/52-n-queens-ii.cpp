class Solution {
public:
  bool safe(int row, int col, vector<vector<string>>& ans, vector<string>&ds, int n)
  {
    cout<<row<<" "<<col;
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
  void find(int col, int n, vector<vector<string>>& ans, vector<string>&ds)
  {
    if(col==n)
    {
      ans.push_back(ds);
      return;
    }
    for(int i=0;i<n;i++)
    {
      if(safe(i,col,ans,ds,n))
      {
        ds[i][col]='Q';
        find(col+1,n,ans,ds);
        ds[i][col]='.';
      }
    }
  }
    int totalNQueens(int n) {
     vector<vector<string>>ans;
      vector<string>ds(n);
      string s(n,'.');
      for(int i=0;i<n;i++)
      {
        ds[i]=s;
      }
      find(0,n,ans,ds);
      return ans.size();
    }
};