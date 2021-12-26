class Solution {
public:
  
    string longestPalindrome(string s) {
      
      if(s.size()<=1) return s ;
      int mx=1;
      int n=s.size();
      int st=0,end=0;
      for(int i=0;i<n-1;i++)
      {
        int l=i,r=i;
        while(l>=0 and r<n){
          if(s[l]==s[r]) {l--; r++;}
          else break;
        }
        int len=r-l-1;
        if(len>mx){
        mx=max(mx,len);
        st=l+1; end=r-1;}
        
      }
      for(int i=0;i<n-1;i++)
      {
        int l=i,r=i+1;
        while(l>=0 and r<n){
          if(s[l]==s[r]) {l--; r++;}
          else break;
        }
        int len=r-l-1;
        if(len>mx){
        mx=max(mx,len);
        st=l+1; end=r-1;}
        
      }
      return s.substr(st,mx);
      
    }
};