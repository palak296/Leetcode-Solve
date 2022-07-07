class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c=m+n;
        cout<<c;
        for(int i=0;i<nums2.size();i++)
        {
            nums1[m+i]=nums2[i];
        }
        int gap;
        if(c%2==0) gap=c/2;
        else gap=c/2+1;
        cout<<gap<<" ";
        while(gap!=1)
        {
            
            int i=0;
            int j=gap;
            while(j<=nums1.size()-1)
            {
                if(nums1[i]>nums1[j])
             swap(nums1[i],nums1[j]);
                i++; j++;
            }
             if(gap%2==0) gap=gap/2;
        else gap=gap/2+1;
            //cout<<gap<<" ";
            for(int i=0;i<nums1.size();i++)
            {
                cout
                    <<nums1[i]<<" ";
               
            }
             cout<<endl;
        }
        int i=0;
            int j=gap;
            while(j<=nums1.size()-1)
            {
                if(nums1[i]>nums1[j])
             swap(nums1[i],nums1[j]);
                i++; j++;
            }
//return nums1;
    }
};