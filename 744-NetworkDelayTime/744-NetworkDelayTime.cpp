// Last updated: 15/05/2026, 17:46:06
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int m = times.size();
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto i:times){
            adj[i[0]].push_back({i[1],i[2]});
        }
        vector<int> cost_v(n+1,1e9);
        cost_v[k] = 0;
        queue<pair<int,int>> q;
        q.push({0,k});
        while(!q.empty()){
            auto it = q.front();
            int cost = it.first;
            int v = it.second;
            q.pop();
            if(cost>cost_v[v]) continue;

            for(auto i:adj[v]){
                int u = i.first;
                int w = i.second;
                if(cost+w<cost_v[u]){
                    cost_v[u] = cost+w;
                    q.push({cost_v[u],u});
                }
            }
        }
        // if(cost_v[n+1] == 1e9) return -1;
        int ans = 0;
        for(int i = 1;i<=n;i++){
            if(cost_v[i] == 1e9) return -1;
            ans = max(ans,cost_v[i]);
        }
        return ans;
    }
};
// class Solution {
// public:
//     int networkDelayTime(vector<vector<int>>& times, int n, int k) {
//         vector<vector<pair<int, int>>> adj(n + 1);

//         for (auto& i : times) {
//             adj[i[0]].push_back({i[1], i[2]});
//         }

//         vector<int> cost_v(n + 1, 1e9);
//         cost_v[k] = 0;

//         queue<pair<int, int>> q;
//         q.push({0, k});

//         while (!q.empty()) {
//             auto [cost, v] = q.front();
//             q.pop();

//             if (cost > cost_v[v])
//                 continue;

//             for (auto& i : adj[v]) {
//                 int u = i.first;
//                 int w = i.second;

//                 if (cost + w < cost_v[u]) {
//                     cost_v[u] = cost + w;
//                     q.push({cost_v[u], u});
//                 }
//             }
//         }

//         int ans = 0;
//         for (int i = 1; i <= n; i++) {
//             if (cost_v[i] == 1e9)
//                 return -1;
//             ans = max(ans, cost_v[i]);
//         }

//         return ans;
//     }
// };