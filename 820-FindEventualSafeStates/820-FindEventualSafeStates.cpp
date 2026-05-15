// Last updated: 15/05/2026, 17:45:47
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> ind(n,0);
        vector<vector<int>> adjR(n);
        for(int i = 0;i<n;i++){
            for(auto j:graph[i]){
                adjR[j].push_back(i);
                ind[i]++;
            }
        }
        queue<int> q;
        vector<int> ans;
        for(int i = 0;i<n;i++){
            if(ind[i] == 0) q.push(i);
        }
        while(!q.empty()){
            int top = q.front();
            q.pop();
            ans.push_back(top);
            for(auto i:adjR[top]){
                ind[i]--;
                if(ind[i] == 0){
                    q.push(i);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};