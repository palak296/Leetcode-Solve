class Solution {
public:
    bool detectCapitalUse(string word) {
      int u=0,l=0;
        for(int i=0;i<word.size();i++)
        {
          if(isupper(word[i]))
          {
            u++;
          }
          if(islower(word[i]))
          {
            l++;
          }
        }
      if(u==word.size()) return true;
      if(l==word.size()) return true;
      if(u==1 and isupper(word[0])) return true;
      return false;
    }
};