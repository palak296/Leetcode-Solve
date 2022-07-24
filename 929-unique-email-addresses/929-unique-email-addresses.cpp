class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string,int>mp;
        for(int i=0;i<emails.size();i++)
        {
            string s=emails[i];
            int a=0;
            string sc="";
            for(int j=0;j<s.size();j++)
            {  
                if(s[j]=='.')
                {
                    if(a==0) continue;
                    else sc+=s[j];
                }
                else if(s[j]=='+')
                {
                    if(a==0)
                    {
                    while(s[j]!='@')
                    {
                        j++;
                    }
                    j=j-1;}
                    else break;
                }
                
             else if(s[j]=='@') {a=1; sc+=s[j];}
             else sc+=s[j];
            }
            cout<<sc<<" ";
            mp[sc]++;
                
        }
        return mp.size();
    }
};