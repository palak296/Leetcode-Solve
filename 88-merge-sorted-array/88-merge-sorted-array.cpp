class Solution {
public:
   
        
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=0;
        for(int i=m;i<m+n;++i){
          nums1[i]=nums2[k++];
      }
        
        int gap=ceil((m+n)/2);
        while(gap>0){
           
            int i=0,j=gap;
            while(j<m+n && i<m+n){
                if(nums1[i]>nums1[j]){
                    swap(nums1[i],nums1[j]);     
                }
               i++;
               j++;
                
            }
            if (gap <= 1)
              gap= 0;
            else
            gap=(gap / 2) + (gap % 2); // always gives the ceil value
            
        }
 
        
    }
};