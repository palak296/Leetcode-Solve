// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int p[], int n)
    {
       // Your code here
       stack<int>s;
       s.push(0);
       vector<int>v;
       int c=1;
       v.push_back(1);
       for(int i=1;i<n;i++)
       {
           
           //while(!s.empty()){
           
           
           while(!s.empty())
           {
               
           if(p[s.top()]>p[i]){
               
               break;
               
           }
           else
           s.pop();
           
           
           //v.push_back(c);
           }
           if(s.empty())
           {
               c=i+1;
               
           }
           else c=i-(s.top());
           v.push_back(c);
           s.push(i);
           
       }
       return v;
    }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends