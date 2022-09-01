class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& pre) {
         vector<int> adj[num];
        vector<int>indegree(num,0);
        for(int i=0;i<pre.size();i++)
        {
            adj[pre[i][1]].push_back(pre[i][0]);
            indegree[pre[i][0]]++;
        }
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
        
        if(res.size()==num) return true;
        return false;
    }
};