class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0;
        int i=0;
        //mp[sum]=1;
        int c=0;
        while(i<nums.size())
        {
            sum=nums[i]+sum;
            if(sum==k) c++;
            if(mp.find(sum-k)!=mp.end()) c=c+mp[sum-k];
            mp[sum]++;
            i++;
        }
        return c;
    }
};