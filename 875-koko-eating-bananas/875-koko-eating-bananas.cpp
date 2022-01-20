
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        
        int l=1,r=10000000000002,ans=-1;
        
        while(l<=r){
            int m=l+(r-l)/2;
            
            int x=0;
            for(auto el:piles){
                x+=(el/m);
                if(el%m!=0){
                    x++;
                }
            }
           
            if(x<=h){
                ans=m;
                r=m-1;
            }
            else{
               l=m+1; 
            }
        }
        return ans;
    }
};