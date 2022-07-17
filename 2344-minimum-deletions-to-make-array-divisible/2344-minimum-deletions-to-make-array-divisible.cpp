class Solution {
public:
    int minOperations(vector<int> &nums, vector<int> &numsDivide) {
        int yp = numsDivide[0];
        for (int i = 1; i < numsDivide.size(); ++i)
            yp = __gcd(yp, numsDivide[i]);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
            if (yp % nums[i] == 0) return i;
        return -1;
    }
};
