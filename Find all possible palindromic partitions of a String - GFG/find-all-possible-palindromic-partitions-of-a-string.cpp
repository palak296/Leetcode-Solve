// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<string>> allPalindromicPerms(string s) {
        // code here
        vector<vector<string>> ans;
        vector<string>ds;
        func(0,ds,ans,s);
        return ans;
    }
    void func(int index, vector<string>&ds, vector<vector<string>>&ans, string s){
        if(index==s.size())
        {
            ans.push_back(ds);
            return ;
        }
        for(int i=index;i<s.size();i++)
        {
            if(isp(s,index,i)==true){
             ds.push_back(s.substr(index,i-index+1));
             func(i+1,ds,ans,s);
             ds.pop_back();
            }
            
        }
        
    }
    bool isp(string s, int st, int e)
        {
            while(st<=e)
            {
                if(s[st]!=s[e]) return false;
                st++;
                e--;
            }
            return true;
        }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends