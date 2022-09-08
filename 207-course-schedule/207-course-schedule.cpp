class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int>adj[n];
        vector<int>v;
        queue<int>q;
        
         for(auto course: p)
            adj[course[1]].push_back(course[0]);
        vector<int>ind(n,0);
        for(int i=0;i<n;i++)
        {
            for(auto it: adj[i])
            {
                ind[it]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(ind[i]==0) q.push(i);
        }
        while(!q.empty())
        {
            int node=q.front();
            v.push_back(node);
            q.pop();
            for(auto it: adj[node])
            {
                ind[it]--;
                if(ind[it]==0) q.push(it);
            }
        }
        return v.size()==n;
    }
};