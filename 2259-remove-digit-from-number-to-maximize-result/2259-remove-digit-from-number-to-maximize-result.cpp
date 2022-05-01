class Solution {
public:
    string removeDigit(string n, char d) {
      string mx="";
      
        for(int i=0;i<n.size();i++)
        {
          string s=n;
          if(n[i]==d)
          {
            
            s.erase(s.begin()+i);
            mx=max(mx,s);
          }
          
        }
      return mx;
    }
};