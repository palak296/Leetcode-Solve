class Solution {
public:
    char findTheDifference(string s, string t) {
      int a=0,b=0;
       for(auto i: s)
       {
         a=a+i;
       }
      for(auto i: t)
       {
         b=b+i;
       }
      return b-a;
    }
};