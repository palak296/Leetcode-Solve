// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
void find(int i, int sum , vector<int>&a, vector<int>&arr, int n)
{
    if(i==n){
        a.push_back(sum);
        return;
    }
    
    find(i+1,sum+arr[i],a,arr,n);
   // sum-=arr[i];
    find(i+1,sum,a,arr,n);
}
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        
        vector<int>a;
        find(0,0,a,arr,n);
        sort(a.begin(),a.end());
        return a;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends