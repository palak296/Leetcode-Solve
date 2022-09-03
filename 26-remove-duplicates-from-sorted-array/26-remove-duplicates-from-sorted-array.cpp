class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=0,b=1;
        while(b<nums.size())
        {
            if(nums[a]==nums[b])
                b++;
            else if(nums[a]!=nums[b])
            {
                nums[a+1]=nums[b];
                a++;
                b++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }
        return a+1;
    }

};