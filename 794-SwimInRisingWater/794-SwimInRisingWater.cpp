// Last updated: 15/05/2026, 17:45:54
class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
        vector<vector<int>> dist(n,vector<int>(n,1e9));
        vector<vector<int>> visit(n,vector<int>(n,0));
        vector<vector<int>> dir = {{1,0},{0,1},{-1,0},{0,-1}};
        dist[0][0] = grid[0][0];
        q.push({grid[0][0],{0,0}});
        while(!q.empty()){
            auto top = q.top();
            int time = top.first;
            int r = top.second.first;
            int c = top.second.second;
            q.pop();

            if(r == n-1 && c == n-1) return time;

            for(auto i : dir){
                int x = i[0]+r;
                int y = i[1]+c;
                if(x>=0 && y>=0 && x<n && y<n){
                    int maxTime = max(time,grid[x][y]);
                    if(maxTime<dist[x][y]){
                        dist[x][y] = maxTime;
                        q.push({maxTime,{x,y}});
                    }
                }
            }
        }
        return -1;
    }
};