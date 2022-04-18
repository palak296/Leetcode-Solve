class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>m;
      int c=0;
      for(int i=0;i<tasks.size();i++)
      {
        m[tasks[i]]++;
      }
      for(auto i: m)
      {
        if(i.second<=1) return -1;
      }
      for(auto i: m)
      {
        c+=(i.second)/3;
            /* if x.second is not divisible by 3, then we would be required to consider the cases when only two tasks are selected 
            - in last round for (x.second%3==2)
            - in last two rounds (x.second%3==1) */
            if(i.second%3==1 || i.second%3==2)
              c++;
        }
      
      return c;
    }
};