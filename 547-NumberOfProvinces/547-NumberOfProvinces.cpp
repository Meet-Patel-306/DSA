// Last updated: 15/05/2026, 17:46:40
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n);
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(i!=j && isConnected[i][j] == 1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int> visit(n,0);
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(!visit[i]){
                visit[i] = 1;
                queue<int> q;
                q.push(i);
                ans++;
                while(!q.empty()){
                    int top = q.front();
                    q.pop();
                    for(int j: adj[top]){
                        if(!visit[j]){
                            visit[j] = 1;
                            q.push(j);
                        }
                    }
                }
            }
        }
        return ans;
    }
};