class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0, e=nums.size()-1;
        int mid=s;
        while(mid<=e){
            if(nums[mid]==2)
            {swap(nums[e],nums[mid]);
             e--;
            }
            else if(nums[mid]==0)
            {
                swap(nums[s],nums[mid]);
                s++; mid++;
            }
            else if(nums[mid]==1)
                mid++;
        }
    }
};