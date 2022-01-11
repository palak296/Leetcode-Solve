class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string,int>m;
      for(int i=0;i<9;i++)
      {
        for(int j=0;j<9;j++)
        {
          if(board[i][j]!='.'){
          string r="row"+to_string(i)+to_string(board[i][j]);
          string c="col"+to_string(j)+to_string(board[i][j]);
          int bx= (i/3)*3+(j/3);
          string box="box"+to_string(bx)+to_string(board[i][j]);
          if(m[r]!=1 and m[c]!=1 and m[box]!=1){
            m[r]=1;
            m[c]=1;
            m[box]=1;
            
          }
          else return false;
        }}
      }
      return true;
    }
};