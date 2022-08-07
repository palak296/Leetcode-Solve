class Solution {
public:
long long int jump(vector<int> nums , int curr, int dest)
{
if(curr>=dest) return 0;
long long int tmp=INT_MAX;
//Try Every jump 1 to nums[curr] jump
//and find minimum steps need to reach to end
for(int i=1;i<=nums[curr];i++)
{
tmp=min(tmp,1+jump(nums,curr+i,dest));
}
return tmp;
}
int jump(vector<int>& nums) {
return jump(nums,0,nums.size()-1);
}
};