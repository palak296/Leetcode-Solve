class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
       int sum=0;
      vector<int>d;
      for(int i=0;i<costs.size();i++)
      {
       
        sum=sum+costs[i][0];
        d.push_back(costs[i][1]-costs[i][0]);
        
      }
      sort(d.begin(),d.end());
      for(int i=0;i<d.size()/2;i++)
      {
        sum+=d[i];
      }
      
      
      return sum;
    }
};