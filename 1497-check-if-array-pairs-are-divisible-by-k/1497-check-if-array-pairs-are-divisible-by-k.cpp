class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        if(k==1)return true;
        vector<int> cnt(k, 0);
        for (auto x:arr)cnt[(x%k + k)%k] +=1;
        if(cnt[0]&1)return false;
        for(int i=1;i<k;++i)if (cnt[i]!=cnt[k-i])return false;
        return true;
    }
};