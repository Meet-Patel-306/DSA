// Last updated: 15/05/2026, 17:44:23
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int m = connections.size();
        if((n-1)>m) return -1;
        vector<vector<int>> adj(n);
        for(auto i:connections){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int> visit(n,0);
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(!visit[i]){
                ans++;
                queue<int> q;
                q.push(i);
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    if(visit[node]) continue;
                    visit[node] = 1;
                    for(auto j:adj[node]){
                        if(!visit[j]){
                            q.push(j);
                        }
                    }
                }
            }
        }
        return ans-1;
    }
};