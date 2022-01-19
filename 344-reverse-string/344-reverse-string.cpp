class Solution {
public:
  void rev(vector<char>&s , int st, int h)
  {
    if(st>h) return ;
    swap(s[st++],s[h--]);
    rev(s,st,h);
  }
    void reverseString(vector<char>& s) {
        rev(s,0,s.size()-1);
    }
};