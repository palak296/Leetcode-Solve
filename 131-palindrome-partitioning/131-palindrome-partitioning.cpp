class Solution {
public:
  void find(int i, string s, vector<vector<string>>&ans, vector<string>&ds)
  {
    if(i==s.size())
    {
      ans.push_back(ds);
      return;
    }
    
    for(int index=i;index<s.size();index++)
    {
      if(isPalindrome(s,i,index)==true)
      {
        ds.push_back(s.substr(i,index-i+1));
        find(index+1,s,ans,ds);
        ds.pop_back();
      }
    }
  }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
      find(0,s,ans,ds);
      return ans;
    }
   bool isPalindrome(const string& s, int start, int end) {
        while(start <= end) {
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }
};