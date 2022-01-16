class Solution {
public:
    int f(int i, int d){
        if(i == 1) return 0; // reached 
        if(d == 0) return i - 1; // only way left to reach 1 in i - 1 operations
        
        int ans = 0;
        
        if(i & 1){ // when i is odd change it to even
            ans = 1 + f(i - 1, d);
        }
        else if(d > 0){ // when i is even and we have maxDoubles left then use it
            ans = 1 + f(i / 2, d - 1);
        }
        
        return ans;
    }
    int minMoves(int target, int maxDoubles) {
        return f(target, maxDoubles); // move reverse from target to 1 using / and - operator.
    }
};