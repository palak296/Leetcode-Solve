class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> maxVals(size);
        maxVals[0] = nums[0];
        deque<int> curMaxVals;
        curMaxVals.push_back(0);
        
        for (int i = 1; i < size; i += 1) {
            int curMaxVal = nums[i] + maxVals[curMaxVals.front()];
            
            while (!curMaxVals.empty() && maxVals[curMaxVals.back()] <= curMaxVal) {
                curMaxVals.pop_back();
            }
            curMaxVals.push_back(i);
            if (curMaxVals.front() <= i - k) {
                curMaxVals.pop_front();
            }
            
            maxVals[i] = curMaxVal;
            
        }
        
        return maxVals[size -1];
        
      
    }
};