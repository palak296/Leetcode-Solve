#define pi pair<int , int>
#define tpi pair<int , pi>

class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size() , m= heights[0].size() , ans = INT_MAX;
        if(n+m == 2)return 0;
        priority_queue<tpi , vector<tpi> , greater<tpi>>pq;
        pq.push({0 ,{0 , 0}});
        bool IsVisited[n][m];
        int Visited[n][m];
        for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < m ; j++)
        {        IsVisited[i][j] = false;
                Visited[i][j] = INT_MAX;
        }
        Visited[0][0]=0;
        vector<pi> v1 = {{0,1} , {0,-1} , {1,0} , {-1,0}};
        while(!pq.empty())
        {
            int diff = pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            IsVisited[x][y]=true;
            pq.pop();
            for(auto a : v1)
            {
                int x_new = x + a.first;
                int y_new = y + a.second;
                if(x_new < 0 || y_new < 0 || x_new >= n || y_new >= m || IsVisited[x_new][y_new])continue;
                int diff_new = max(diff , abs(heights[x_new][y_new]-heights[x][y]));
                if(Visited[x_new][y_new] <= diff_new)continue;
                Visited[x_new][y_new] = diff_new;
                pq.push({diff_new , {x_new , y_new}});
            }
        } 
        return Visited[n-1][m-1];
        }
};