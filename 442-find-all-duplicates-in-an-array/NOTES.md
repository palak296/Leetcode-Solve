class Solution {
public:
vector<int> findDuplicates(vector<int>& nums) {
vector<int>v;
for(int i=0;i<nums.size();i++)
{
if(nums[abs(nums[i])]<0) {
v.push_back(nums[abs(nums[i])]);
nums[abs(nums[i])]=nums[abs(nums[i])]* -1;
}
return v;
}
};