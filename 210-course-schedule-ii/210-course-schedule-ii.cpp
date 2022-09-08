class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& pre) {
         vector<int> adj[num];
        
        vector<int>indegree(num,0);
         for(auto course: pre)
            adj[course[1]].push_back(course[0]);
        for(int i=0; i<num; ++i)
            for(int v: adj[i])
                indegree[v]++;
         queue<int>q;
        for(int i=0;i<num;i++)
        {  
		   if(indegree[i]==0) q.push(i);
        }
        vector<int> res;
        while(!q.empty())
        {   int x=q.front();
            res.push_back(x);
            q.pop();
           for(auto it:adj[x])
              {   indegree[it]--;
                  if(indegree[it]==0)
                     q.push(it);
              }
        }
        
        if(res.size()==num) return res;
        return {};
    }
};