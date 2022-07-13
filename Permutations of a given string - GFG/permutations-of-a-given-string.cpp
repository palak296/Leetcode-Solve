// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	vector<string>ans;
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    
		    a(s,0);
		    sort(ans.begin(),ans.end());
		    ans.erase(unique(ans.begin(), ans.end()), ans.end());

		    return ans;
		}
		
		void a(string s, int pos){
		    if(pos==s.size()) {
		        ans.push_back(s);
		        return;
		    }
		    for(int i=pos;i<s.size();i++){
		    swap(s[pos],s[i]);
		    a(s,pos+1);
		    swap(s[pos],s[i]);
		    }
		   
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends