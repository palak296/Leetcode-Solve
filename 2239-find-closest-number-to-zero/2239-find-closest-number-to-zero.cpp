class Solution {
public:
   int findClosestNumber(vector<int>& nums) {
        int mn = INT_MAX;  
        for(auto x:nums){
            if(abs(x)<abs(mn))
                mn = x;
            else if(abs(x)==abs(mn))
                mn = max(x,mn);
        }
        return mn;
    }
};