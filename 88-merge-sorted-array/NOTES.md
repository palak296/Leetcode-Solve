for(int i=m;i<m+n;i++){
nums1[i]=nums2[i-m];
}
int gap= ceil((m+n)/2);
while(gap>=1){
for(int i=0;i+gap<m+n;i++){
if(nums1[i]>nums1[i+gap])
swap(nums1[i],nums1[i+gap]);
}
gap=ceil(gap/2);
}