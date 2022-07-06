class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int>st;
        for(auto num:nums)
        {
            st.insert(num);
        }
       
        int cn=0;
        int mx=0;
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)==st.end())
            {
                int cs=1;
                cn=nums[i];
                while(st.count(cn+1))
                {
                    
                        cs++;
                        cn++;
                    
                }
                mx=max(cs,mx);
            }
            
        }
        
        return mx;
    }
};