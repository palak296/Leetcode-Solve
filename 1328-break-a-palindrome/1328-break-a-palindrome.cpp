class Solution {
public:
   string breakPalindrome(string p) {
        
        int s = p.size();
        if (s <= 1) return "";
        
        for (int i=0; i < s/2; i++) {
            if (p[i] > 'a')  {
                p[i] = 'a';
                return p;
            }
        }
        
        p[s-1] = 'b';
        return p;
    }
};