class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int n=nums.size();
int pf[n];     
      pf[0]=nums[0];
      int sum=0;
      for(int i=0;i<n;i++)
      {
        sum+=nums[i];
      }
        for(int i=1;i<n;i++)
        {
          pf[i]=pf[i-1]+nums[i];
        }
      int left=0;
    for(int i=0;i<nums.size();i++)
      {
        if(left==sum-pf[i]) {return i; }
        else 
          left=pf[i];
      }
      return -1;
    }
};

/*class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
      int n=nums.size();
        int pf[n];
        if(nums.size()==1)
            return 0;
        int tsum=0;
        for(int i=0;i<nums.size();i++)
        {
            tsum+=nums[i];
        }
      for(int i=1;i<nums.size();i++)
        {
          pf[i]=pf[i-1]+nums[i];
        }
        
        int lsum=0;
        for(int j=0;j<nums.size();j++)
        {
            if(lsum==(tsum-pf[j]))
                return j ;
            lsum=pf[j];
        }
        return -1;
    }
};*/