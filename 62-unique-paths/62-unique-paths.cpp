class Solution {
public:
    int uniquePaths(int m, int n) {
        
      
    long long int a=m-1+n-1;
   int r = min(n,m) - 1;
     double res = 1;
        
		// compute nCr
        for(int i=1; i<=r; ++i, a--){
            
            res = res * (a) / i;
        }
        return res;

}
 
    

};
