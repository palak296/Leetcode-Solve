class Solution {
public:
    int maxPower(string s) {
        int sub=1,mx=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]==s[i]) {sub++;            mx=max(mx,sub);
                             }
            else
                sub=1;
        }
return mx;    }
    
};