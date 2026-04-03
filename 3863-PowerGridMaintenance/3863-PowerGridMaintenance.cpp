// Last updated: 03/04/2026, 15:59:27
class Solution {
public:

vector<int> parent, rankv;
vector<set<int>> onlineNodes;

int findParent(int x) {
    if (parent[x] != x)
        parent[x] = findParent(parent[x]); // Path compression
    return parent[x];
}

void unionSet(int a, int b) {
    int pa = findParent(a);
    int pb = findParent(b);
    if (pa == pb) return;

    if (rankv[pa] < rankv[pb]) swap(pa, pb);

    parent[pb] = pa;
    if (rankv[pa] == rankv[pb]) rankv[pa]++;

    // Merge smaller set into larger one
    if (onlineNodes[pb].size() > onlineNodes[pa].size())
        swap(onlineNodes[pb], onlineNodes[pa]);
    onlineNodes[pa].insert(onlineNodes[pb].begin(), onlineNodes[pb].end());
    onlineNodes[pb].clear();
}

    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        parent.resize(c + 1);
        rankv.assign(c + 1, 0);
        onlineNodes.resize(c + 1);
        // Initialize DSU
        for (int i = 1; i <= c; i++)
            parent[i] = i;
        // Build power grid connections
        for (auto &e : connections)
            unionSet(e[0], e[1]);
        // Initially, all are online
        for (int i = 1; i <= c; i++) {
            int p = findParent(i);
            onlineNodes[p].insert(i);
        }

        vector<int> result;

        // Process queries
        for (auto &q : queries) {
            int type = q[0], x = q[1];
            if (type == 1) { // Maintenance check
                int p = findParent(x);
                if (onlineNodes[p].count(x))
                    result.push_back(x);
                else if (!onlineNodes[p].empty())
                    result.push_back(*onlineNodes[p].begin());
                else
                    result.push_back(-1);
            } 
            else if (type == 2) { // Station goes offline
                int p = findParent(x);
                onlineNodes[p].erase(x);
            }
        }
        return result;
    }
};