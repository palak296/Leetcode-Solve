// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> leftSmaller(int n, int arr[]){
        // code here
        stack<int>s;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            
            
            while(s.size()>0 and s.top()>=arr[i])
            {
                s.pop();
                
            }
            if(s.empty())
            {
                v.push_back(-1);
                s.push(arr[i]);
            }
            else if(s.top()<arr[i])
            {
                v.push_back(s.top());
                s.push(arr[i]);
            }
                
            
            
            
        }
        return v;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends