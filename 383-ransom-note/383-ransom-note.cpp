class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int store[26] = {0};
        for(auto i : magazine){
            store[i - 'a']++;
        }
        for(auto i : ransomNote){
            if(store[i - 'a'] <= 0) return false;
            else store[i - 'a']--;
        }
        return true;
    }
};