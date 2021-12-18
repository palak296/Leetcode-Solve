class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        // int n=b.size();
        // int m=b[0].size();
        unordered_map<string,int>mp;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(b[i][j]!='.')
                {
                    string r="row"+to_string(i)+to_string(b[i][j]);   
                    
                    string c="col"+to_string(j)+to_string(b[i][j]);
                    int boxn=(i/3)*3+(j/3);
                string box="box"+to_string(boxn)+to_string(b[i][j]);
                    if(mp[r]!=1 and mp[c]!=1 and mp[box]!=1)
                    {
                        mp[r]=1; mp[c]=1; mp[box]=1;
                    }
                    else return false;

                }
            }
        }
        return true;
    }
};