// Last updated: 15/05/2026, 17:44:49
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        // vector<pair<int,int>> land;
        // vector<pair<int,int>> water;
        int n = grid.size();
        // for(int i = 0;i<n;i++){
        //     for(int j = 0;j<n;j++){
        //         if(grid[i][j] == 1){
        //             land.push_back({i,j});
        //         }else{
        //             water.push_back({i,j});
        //         }
        //     }
        // }
        // int maxd = INT_MIN;
        // for(auto w:water){
        //     int wmin = INT_MAX;
        //     for(auto l:land){
        //         int d = abs(l.first-w.first) + abs(l.second-w.second);
        //         wmin = min(wmin,d);
        //     }
        //     maxd = max(maxd,wmin);
        // }
        // if(maxd == INT_MAX || maxd == INT_MIN) return -1; 
        // return maxd;

        queue<pair<int,int>> q;
        vector<vector<int>> visit = grid;
        for(int i = 0;i<n;i++){
            for (int j = 0;j<n;j++){
                if(visit[i][j] == 1) q.push({i,j});
            }
        }
        if(q.empty() || q.size() == n*n) return -1;
        int d = -1;
        vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto [x,y] = q.front();
                q.pop();
                for(auto i:dir){
                    int dx = x+i[0],dy = y+i[1];
                    if(dx>=0 && dx<n && dy>=0 && dy<n && visit[dx][dy] == 0){
                        q.push({dx,dy});
                        visit[dx][dy] = 1;
                    }
                }
            }
            d++;
        }
        return d;
    }
};