vector<list<int>> adj(numCourses);
for(auto course: prerequisites)
adj[course[1]].push_back(course[0]);
for(int i=0; i<numCourses; ++i)
for(int v: adj[i])
inDegree[v]++;