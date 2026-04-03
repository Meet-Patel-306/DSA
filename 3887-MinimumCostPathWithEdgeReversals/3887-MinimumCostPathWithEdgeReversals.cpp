// Last updated: 03/04/2026, 15:59:22
class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto &i : edges){
            adj[i[0]].push_back({i[1],i[2]});
            adj[i[1]].push_back({i[0],i[2]*2});
        }
        

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(n,INT_MAX);
        dist[0] = 0;
        pq.push({0, 0});

        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();

            int d = top.first;  
            int u = top.second; 

            // If this distance not the latest shortest one, skip it
            if (d > dist[u])
                continue;

            // Explore all neighbors of the current vertex
            for (auto &p : adj[u]) {
                int v = p.first; 
                int w = p.second; 

                // If we found a shorter path to v through u, update it
                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;   
                    pq.emplace(dist[v], v);
                }
            }
        }
        return dist[n-1] == INT_MAX ? -1 : dist[n-1];
    }
};