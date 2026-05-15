// Last updated: 15/05/2026, 17:45:05
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i:nums) ans.push_back(i*i);
        sort(ans.begin(),ans.end());
        return ans;
    }
};