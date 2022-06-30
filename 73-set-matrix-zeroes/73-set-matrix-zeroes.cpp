class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int r=m.size();
        int c=m[0].size();
        vector<int>row(r,-1);
        vector<int>col(c,-1);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(m[i][j]==0)
                {   row[i]=0; col[j]=0;}
            }
        }
        for(int i=0;i<r;i++) cout<<row[i]<<" ";
            cout<<endl;
          for(int i=0;i<c;i++) cout<<col[i]<<" ";
        for(int i=0;i<r;i++)
        {
            if(row[i]==0){
                for(int j=0;j<c;j++){
                    m[i][j]=0;
                }
            }
        }
        for(int i=0;i<c;i++)
        {
            if(col[i]==0){
                for(int j=0;j<r;j++){
                    m[j][i]=0;
                }
            }
        }
    }
};