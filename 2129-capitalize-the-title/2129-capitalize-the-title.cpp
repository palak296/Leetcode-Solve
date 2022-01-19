class Solution {
public:
    string capitalizeTitle(string s) {
      transform(s.begin(), s.end(), s.begin(), ::tolower);
string ans="";
string temp="";
for(int i=0; i<s.length() ; i++)
{
    if(s[i]==' ')
    {
       if(temp.length()>2)
       {
           temp[0]-=32;
       }
        ans+=temp+' ';
       temp=""; 
    }
    else temp+=s[i];
}
if(temp.length()>2) temp[0]-=32;
ans+=temp;
        return ans;
    }
};