class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ss=s.size();
        int ts=t.size();
        int i=0;
        int j=0;
        int c=0;
        while(i<ts and j<ss)
        {
            if(t[i]==s[j])
            {
                j++; i++;
                c++;
            }
            else if(i++);
        }
        if(c!=ss) return false;
        return true;
    }
};