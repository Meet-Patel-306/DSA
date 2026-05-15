// Last updated: 15/05/2026, 17:45:52
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // {adjNode, edW}
        vector<vector<pair<int,int>>> adj(n); 
        for(auto i:flights){
            adj[i[0]].push_back({i[1],i[2]});
        }
        // {stops,{node,cost}}
        queue<pair<int,pair<int,int>>> q;
        vector<int> costs(n,1e9);
        q.push({0,{src,0}});
        costs[src] = 0;
        while(!q.empty()){
            auto it = q.front();
            q.pop();

            int stop = it.first;
            int node = it.second.first;
            int cost = it.second.second;

            if(stop>k) continue;

            for(auto i:adj[node]){
                int adjnode = i.first;
                int edW = i.second;
                if(cost + edW<costs[adjnode] && stop<=k){
                    costs[adjnode] = cost+edW;
                    q.push({stop+1,{adjnode,cost+edW}});
                }
            }
        }
        if(costs[dst] == 1e9) return -1;
        return costs[dst];
    }
};