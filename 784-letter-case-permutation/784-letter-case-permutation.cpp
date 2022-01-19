class Solution {
public:
  void find(int i, string s, set<string>&st)
  {
    int n=s.size();
    if(i==n)
    {
      cout<<s<<" ";
      st.insert(s);
    }
    if(i<n){
    if( !isdigit(s[i])){
     s[i]= toupper(s[i]);
    }
    
    find(i+1,s,st);
    s[i]=tolower(s[i]);
    find(i+1,s,st);
  }
  }
    vector<string> letterCasePermutation(string s) {
      // string ds;
      set<string>st;
      vector<string>vs;
      find(0,s,st);
      for(auto x:st)
      {
        vs.push_back(x);
      }
      return vs;
    }
};