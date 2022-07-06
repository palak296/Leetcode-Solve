class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<int>v;
        vector<string>s;
        int nm=1;
        
        for(int i=0;i<target.size();i++)
        {
            while(nm!=target[i])
            {
                nm++;
                 s.push_back("Push");
                s.push_back("Pop");
            }
            
           s.push_back("Push");
            nm++;
        }
        return s;
    }
};