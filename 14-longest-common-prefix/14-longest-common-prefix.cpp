class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s=strs[0];
        int n=strs.size();
        string a="";
        string l=strs[n-1];
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==l[i]){
                a+=s[i];
            }
            else break;
        }
        return a;
    }
};