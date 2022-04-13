class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0, end=arr.size()-1;
      while(start<=end)
      {
        if(arr[start]<arr[end]) start++;
        else if(arr[start]>arr[end]) end--;
        else {start++; end--;}
      }
      return start-1;
    }
};