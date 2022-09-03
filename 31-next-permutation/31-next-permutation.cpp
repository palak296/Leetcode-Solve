class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k=-1,l=0;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                k=i;
                break;
            }
        }
        if(k<0) {reverse(nums.begin(),nums.end()); return;}
        for( l=nums.size()-1;l>k;l--)
        {
            if(nums[l]>nums[k]) break;
            
        }
        swap(nums[l],nums[k]);
        reverse(nums.begin()+k+1,nums.end());
        
    }
};