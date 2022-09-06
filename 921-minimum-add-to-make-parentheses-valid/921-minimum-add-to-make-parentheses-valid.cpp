class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')')
            {
                if(st.empty()==true) c++;
                else st.pop();
            }
        }
        return c+st.size();
    }
};