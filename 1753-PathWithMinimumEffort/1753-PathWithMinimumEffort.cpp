// Last updated: 15/05/2026, 17:43:26
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        vector<vector<int>> dir = {{1,0},{0,1},{-1,0},{0,-1}};
        dist[0][0] = 0;
        q.push({0,{0,0}});
        while(!q.empty()){
            auto top = q.top();
            int r = top.second.first;
            int c = top.second.second;
            int diff = top.first;
            q.pop();
            if(r == n-1 && c == m-1) return diff;
            for(auto i:dir){
                int x = r+i[0];
                int y = c+i[1];
                if(x<n && y<m && x>=0 && y>=0){
                    int newE = max(diff,abs(heights[r][c] - heights[x][y]));
                    if(newE<dist[x][y]){
                        dist[x][y] = newE;
                        q.push({newE,{x,y}});
                    }
                }
            }
        }
        return -1;
    }
};