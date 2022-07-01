class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int mx=0;
        int i=0,j=0;
        
        while(j<s.size())
        {
            if(st.count(s[j])==0)
            {st.insert(s[j]); 
             int a=st.size();
             mx=max(a,mx); 
             j++;
            }
            else
                
            {st.erase(s[i]);
            i++;}
            
        }
        return mx;
    }
};