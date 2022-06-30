class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n1=-1, n2=-1, c1=0,c2=0;
        for(int el: nums)
        {
            if(el==n1) c1++;
            else if(el ==n2) c2++;
            else if(c1==0) {n1=el; c1=1;}
            else if (c2==0) {n2=el; c2=1;}
            else {c1--; c2--;}
        }
         c1 = c2 = 0;
     for (const auto & x: nums)
		 if (x == n1) c1++;
			 else if (x == n2) c2++;
  
	  vector<int> r;
	  if (c1 > size(nums)/3) r.push_back(n1);
	  if (c2 > size(nums)/3) r.push_back(n2);
	  return r;
        
    }
};