class Solution {
public:
    int climbStairs(int n) {
        int p,c,x;
        p=c=1;
       for(int i=2; i<=n; i++){
     x=p+c;
           p=c;
           c=x;
           
  }
 
  return c;
        
        
        
        
    }
};