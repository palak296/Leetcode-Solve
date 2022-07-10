class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>p;
        for(auto i: nums)
            p.push(i);
    
   while(true)
   {
       
       if(p.size()>nums.size()-k+1)
                p.pop();
       else break;
   }
    return p.top();
    }
};