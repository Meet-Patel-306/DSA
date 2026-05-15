// Last updated: 15/05/2026, 17:45:29
class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        vector<int> min_roll(n*n,-1);
        queue<int> q;
        min_roll[1] = 0;
        q.push(1);
        while(!q.empty()){
            int x = q.front();
            q.pop();
            for(int i = 1;i<=6 && x+i<=n*n;i++){
                int t = x+i;
                int row = (t-1)/n;
                int col = (t-1)%n;
                int v = board[n - 1 - row][row % 2 ? n - 1 - col : col];
                int y = v>0?v:t;
                if(y == n*n) return min_roll[x]+1;
                if(min_roll[y] == -1){
                    min_roll[y] = min_roll[x]+1;
                    q.push(y);
                }
            }
        }
        return -1;
    }
};