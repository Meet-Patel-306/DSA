// Last updated: 15/05/2026, 17:44:57
class Solution {
public:
    void dfs(vector<vector<int>>& board,vector<vector<int>>& visit,int i,int j,int n,int m){
        if(i<0 ||i>=n || j<0 || j>=m || visit[i][j] == 1 || board[i][j] != 1) return;
        vector<vector<int>> dir = {{0,1},{0,-1},{-1,0},{1,0}};
        visit[i][j] = 1;
        for(auto a:dir){
            int x = i+a[0];
            int y = j+a[1];
            dfs(board,visit,x,y,n,m);
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visit(n,vector<int>(m,0));
        for(int i = 0;i<n;i++){
            dfs(grid,visit,i,0,n,m);
            dfs(grid,visit,i,m-1,n,m);
        }
        for(int i = 0;i<m;i++){
            dfs(grid,visit,0,i,n,m);
            dfs(grid,visit,n-1,i,n,m);
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 1 && visit[i][j] == 0){
                    ans++;
                }
            }
        }
        return ans;
    }
};