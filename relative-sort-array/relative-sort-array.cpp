class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
      vector<int>v;
      vector<int>c;
        for(int i=0;i<arr2.size();i++)
        {
          for(int j=0;j<arr1.size();j++)
          {
            if(arr2[i]==arr1[j])
              v.push_back(arr1[j]);
              
          }
          
        }
      for(int i=0;i<arr1.size();i++)
      {
        if(find(arr2.begin(),arr2.end(),arr1[i])==arr2.end())
          c.push_back(arr1[i]);
      }
      sort(c.begin(),c.end());
      for(int i=0;i<c.size();i++)
      {
        v.push_back(c[i]);
      }
      return v;
    }
};