class Solution {
public int removeDuplicates(int[] nums) {
int l = 0, r = l+1;
while(r < nums.length) {
if(nums[l] == nums[r]) {
r++;
} else {
l += 1;
nums[l] = nums[r];
r++;
}
}
return l+1;
}
}