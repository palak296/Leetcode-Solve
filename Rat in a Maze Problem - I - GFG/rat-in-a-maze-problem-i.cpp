// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void find(int row, int col, vector<vector<int>> &m, int n, vector<vector<int>> &vis, vector<string>&ans, string move)
    {
        if(row==n-1 and col==n-1)
        {
            ans.push_back(move);
            return;
        }
        //downward
        if(row+1<n and !vis[row+1][col] and m[row+1][col]==1)
        {
            vis[row+1][col]=1;
            find(row+1,col,m,n,vis,ans,move+'D');
            vis[row+1][col]=0;
        }
        //left
        if(col-1>=0 and !vis[row][col-1] and m[row][col-1]==1)
        {
            vis[row][col-1]=1;
            find(row,col-1,m,n,vis,ans,move+'L');
            vis[row][col-1]=0;
        }
        //right
       if(col+1<n and !vis[row][col+1] and m[row][col+1]==1)
        {
            vis[row][col+1]=1;
            find(row,col+1,m,n,vis,ans,move+'R');
            vis[row][col+1]=0;
        }
        //up
        if(row-1>=0 and !vis[row-1][col] and m[row-1][col]==1)
        {
            vis[row-1][col]=1;
            find(row-1,col,m,n,vis,ans,move+'U');
            vis[row-1][col]=0;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) 
    {
        // Your code goes here
         vector<vector<int>> vis(n,vector<int>(n,0));
         vector<string>ans;
         vis[0][0]=1;
         if(m[0][0]==1) find(0,0,m,n,vis,ans,"");
         return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends