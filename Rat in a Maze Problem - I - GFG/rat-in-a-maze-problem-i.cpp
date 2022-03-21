// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        vector<vector<int> > vis( n , vector<int> (n, 0)); 
        vis[0][0]=1;
        vector<string>ans;
        
        if(m[0][0]==1) maze(0,0,vis,n,m,ans,"");
        return ans;
    }
    void maze(int i, int j, vector<vector<int>>& vis, int n, vector<vector<int>>& m,vector<string>& ans,string s){
        if(i==n-1 and j==n-1)
        {
           
            ans.push_back(s);
            
            return;
        }
       
        //up
       
       
        //down
        if(i+1<n and !vis[i+1][j] and m[i+1][j]==1)
        {
            
            vis[i+1][j]=1;
            maze(i+1,j,vis,n,m,ans,s+'D');
            vis[i+1][j]=0;
        }
        //left
        if(j-1>=0 and !vis[i][j-1] and m[i][j-1]==1)
        {
            
            vis[i][j-1]=1;
            maze(i,j-1,vis,n,m,ans,s+'L');
            vis[i][j-1]=0;
        }
        //right
        if(j+1<n and !vis[i][j+1] and m[i][j+1]==1)
        {
            
            vis[i][j+1]=1;
            maze(i,j+1,vis,n,m,ans,s+'R');
            vis[i][j+1]=0;
        }
         if(i-1>=0  and !vis[i-1][j] and m[i-1][j]==1)
        {
            
            vis[i-1][j]=1;
            maze(i-1,j,vis,n,m,ans,s+'U');
             vis[i-1][j]=0;
            
        }
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