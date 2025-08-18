// Last updated: 18/08/2025, 18:36:59
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int m = grid.size();
        int n = grid[0].size();
        int t = 0, ct = 0, mnt = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != 0)
                    t++;
                if (grid[i][j] == 2)
                    q.push({i, j});
            }
        }
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};

        while (!q.empty()) {
            int k = q.size();
            ct += k;
            while (k--) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for (int i = 0; i < 4; i++) {
                    int ax = x + dx[i];
                    int ay = y + dy[i];
                    if (ax < 0 || ay < 0 || ax >= m || ay >= n ||
                        grid[ax][ay] != 1)
                        continue;
                    grid[ax][ay] = 2;
                    q.push({ax, ay});
                }
            }
            if (!q.empty())
                mnt++;
        }
        // cout<<t << " "<< ct;
        return t==ct? mnt:-1;
    }
};