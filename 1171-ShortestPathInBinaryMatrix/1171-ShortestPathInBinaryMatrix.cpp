// Last updated: 15/05/2026, 17:44:46
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0] != 0 || grid[n-1][n-1] != 0) return -1;
        queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> dis(n,vector<int>(n,1e9));
        dis[0][0] = 0;
        q.push({0,{0,0}});
        vector<vector<int>> dir = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};
        while(!q.empty()){
            auto top = q.front();
            q.pop();
            int wt = top.first;
            int r = top.second.first;
            int c = top.second.second;
            if(r==n-1 && c ==n-1) return wt+1;
            for(auto i:dir){
                int x = r+i[0];
                int y = c+i[1];
                if(x<n && y<n && x>=0 && y>=0 && grid[x][y] == 0 && wt+1<dis[x][y]){
                    dis[x][y] = wt+1;
                    q.push({wt+1,{x,y}});
                }
            }
        }
        return -1;
    }
};