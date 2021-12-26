class Solution {
public:

    
    void rev(vector<char>& s,int l,int h) {
          
        if(l>=h) return;
  swap(s[l++],s[h--]);
        rev(s,l,h);
     
    }
    void reverseString(vector<char>& s) {
        rev(s,0,s.size()-1);}
};