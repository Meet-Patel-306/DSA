// Last updated: 15/05/2026, 17:46:14
class DSU{
    vector<int> parent;
public:
    DSU(int n){
        parent.resize(n);
        for(int i = 0;i<n;i++){
            parent[i] = i;
        }
    }
    int find(int i){
        if(parent[i] == i){
            return i;
        }
        return parent[i] = find(parent[i]);
    }
    void unite(int i,int j){
        int irep = find(i);
        int jrep = find(j);
        if (irep != jrep) {
            parent[irep] = jrep;
        }
    }
};

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();
        DSU dsu(n);
        map<string,int> mp;
        for(int i = 0;i<n;i++){
            for(int j = 1;j<accounts[i].size();j++){
                if(mp.find(accounts[i][j]) == mp.end()){
                    mp[accounts[i][j]] = i;
                }else{
                    int parent = mp[accounts[i][j]];
                    dsu.unite(parent,i);
                }
            }
        }
        vector<vector<string>> merge(n);
        for(auto i:mp){
            string email = i.first;
            int node = i.second;
            int parent = dsu.find(node);
            merge[parent].push_back(email);
        }

        vector<vector<string>> ans;
        for (int i = 0; i < n; i++) {
            if (merge[i].empty()) continue;
            sort(merge[i].begin(), merge[i].end());
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            for (auto email : merge[i]) {
                temp.push_back(email);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};