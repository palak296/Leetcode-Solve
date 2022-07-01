}
void helper(vector<int> & nums,int i, int target, int & sum, vector<int> &v1, vector<vector<int>>&v) {
if(sum>target){
return;
}
if(sum==target){
// sort(v1.begin(),v1.end());
v.push_back(v1);
return;
}
if(i==nums.size()){
return;
}
helper(nums, i+1, target, sum, v1, v);
v1.push_back(nums[i]);
sum=sum+nums[i];
helper(nums, i+1, target, sum, v1, v);
​
sum=sum-v1[v1.size()-1];
v1.pop_back();
}
};