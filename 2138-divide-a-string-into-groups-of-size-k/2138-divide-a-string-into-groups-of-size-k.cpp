class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.length();
        vector<string> ans;
        
        string curr = "";
        for(int i=0; i<n; i++){
            curr.push_back(s[i]);
            if(curr.size() == k){
                ans.push_back(curr);
                curr = "";
            }
        }
        if(curr.size() > 0){
            while(curr.size() != k){
                curr.push_back(fill);
            }
            ans.push_back(curr);
        }
        return ans;
        
    }
};