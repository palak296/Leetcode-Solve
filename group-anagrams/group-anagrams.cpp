class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        
      vector<vector<string>>v;
      unordered_map<string,vector<string>> m;
      for(int i=0;i<s.size();i++)
      {
        string t=s[i];
        sort(t.begin(),t.end());
        m[t].push_back(s[i]);
      }
      for(auto it: m)
      {
        v.push_back(it.second);
      }
      return v;
    }
};