// Last updated: 15/05/2026, 17:45:16
class Solution {
public:
    void dfs(vector<vector<int>> &adj,vector<int> &visit,int node){
        if(visit[node]) return;
        visit[node] = 1;
        for(auto it:adj[node]){
            if(!visit[it]) dfs(adj,visit,it);
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<vector<int>> adj(n);
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1]){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int> visit(n,0);
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(!visit[i]){
                ans++;
                dfs(adj,visit,i);
            }
        }
        return n-ans;
    }
};