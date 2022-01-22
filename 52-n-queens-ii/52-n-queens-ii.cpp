class Solution {
public:
   bool safe(int row, int col, int n, vector<string>&b)
  {
    int dr=row;
    int dc=col;
    
    while(row>=0 and col>=0)
    {
      if(b[row][col]=='Q') return false;
      row--; col--;
    }
    row=dr;
    col=dc;
    while(col>=0)
    {
      if(b[row][col]=='Q') return false;
      col--;
    }
    row=dr;
    col=dc;
    while(row<n and col>=0)
    {
      if(b[row][col]=='Q') return false;
      row++;
      col--;
    }
    return true;
  }
    
 void find(int col,int n, vector<string>& board, vector<vector<string>>& ans)
  {
    if(col==n)
    {
      ans.push_back(board);
     return;
    }
    for(int i=0;i<n;i++)
    {
      if(safe(i,col,n,board))
      {
        board[i][col]='Q';
        find(col+1,n,board,ans);
        board[i][col]='.';
      }
    }
  } 
 
    int totalNQueens(int n) {
      vector<vector<string>> ans;
    string s(n,'.');
      vector<string> board(n);
      for(int i=0;i<n;i++)
      {
        board[i]=s;
      }
      find(0,n,board,ans);
    return ans.size();
    }
};


 