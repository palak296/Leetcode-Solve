class Solution {
public:
    int compress(vector<char>& ch) {
        int i=0;
        int j=0;
        while(i<ch.size())
        {
            ch[j]=ch[i];
            int ct=0;
            while(i<ch.size() and ch[i]==ch[j])
            {
                i++; ct++;
            }
            if(ct==1) j++;
            else{
                string s=to_string(ct);
                for(auto i: s)
                    ch[++j]=i;
                j++;
            }
        }
        return j;
    }
};