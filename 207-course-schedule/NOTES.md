class Solution {
public:
bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
vector<int> adj[numCourses];
vector<int>indegree(numCourses,0);
int m=prerequisites.size();
for(int i=0;i<m;i++)
{  adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
indegree[prerequisites[i][0]]++;
}
queue<int>q;
for(int i=0;i<numCourses;i++)
{
if(indegree[i]==0) q.push(i);
}
vector<int> res;
while(!q.empty())
{   int x=q.front();
res.push_back(x);
q.pop();
for(auto it:adj[x])
{   indegree[it]--;
if(indegree[it]==0)
q.push(it);
}
}
if(res.size()==numCourses) // If its DAG-->No cycle ,then res will conatin all courses//
return true;
return false;     // If there is cycle then res will not contain all courses //
}
};