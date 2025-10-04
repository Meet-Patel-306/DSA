// Last updated: 04/10/2025, 18:42:20
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = INT_MAX;
        for(auto i:tasks){
            int f = i[0]+i[1];
            ans = min(ans,f);
        }
        return ans;
    }
};