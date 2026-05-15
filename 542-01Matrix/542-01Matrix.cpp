// Last updated: 15/05/2026, 17:46:42
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m,INT_MAX));
        queue<pair<int,int>> q;

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j] == 0){
                    ans[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
        vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            auto [i,j] = q.front();
            q.pop();
            for(auto a:dir){
                int x = i+a[0];
                int y = j+a[1];
                if(x<n && x>=0 && y<m && y>=0){
                    if(ans[x][y]>ans[i][j]+1){
                        ans[x][y] = 1+ans[i][j];
                        q.push({x,y});
                    }
                }
            }
        }
        return ans;
    }
};