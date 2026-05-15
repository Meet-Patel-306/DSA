// Last updated: 15/05/2026, 17:45:23
class Solution {
public:
    queue<pair<int,int>> q;

    void dfs(vector<vector<int>>& grid, int n, int i, int j) {
        if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] != 1)
            return;
        q.push({i, j});
        grid[i][j] = 2;
        dfs(grid, n, i + 1, j);
        dfs(grid, n, i - 1, j);
        dfs(grid, n, i, j + 1);
        dfs(grid, n, i, j - 1);
    }

    int bfs(vector<vector<int>>& grid, int n, int ans) {
        vector<vector<int>> dir = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();
                for (int j = 0; j < 4; j++) {
                    int x = curr.first + dir[j][0];
                    int y = curr.second + dir[j][1];
                    if (x >= 0 && x < n && y >= 0 && y < n) {
                        if (grid[x][y] == 1)
                            return ans;
                        if (grid[x][y] == 0) {
                            q.push({x, y});
                            grid[x][y] = 2;
                        }
                    }
                }
            }
            ans++;
        }
        return -1;
    }

    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();
        bool flag = false;
        for (int i = 0; i < n && !flag; i++) {
            for (int j = 0; j < n && !flag; j++) {
                if (grid[i][j] == 1) {
                    dfs(grid, n, i, j);
                    flag = true;
                }
            }
        }
        return bfs(grid, n, 0);
    }
};
