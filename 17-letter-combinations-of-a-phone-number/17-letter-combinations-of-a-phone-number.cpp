 unordered_map<char,string>let({{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}});
class Solution {
public:
 
  void find(int i, string str, vector<string> &ans, string digits){
    if(i==digits.size())
    {
      ans.push_back(str);
    }
    string l=let[digits[i]];
    for(int j=0;j<l.size();j++)
    {
      find(i+1,str+l[j],ans,digits);
    }
  }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
      if(digits.size()==0) return ans;
      string str="";
      find(0,str,ans,digits);
      return ans;
    }
};