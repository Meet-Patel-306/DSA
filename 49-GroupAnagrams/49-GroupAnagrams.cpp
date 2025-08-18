// Last updated: 18/08/2025, 18:38:52
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> um;
        vector<vector<string>> ans;
        for(string s:strs){
            string sortStr = s;
            sort(sortStr.begin(),sortStr.end());
            um[sortStr].push_back(s);
        }
        for(auto [key,group]:um){
            ans.push_back(group);
        }
        return ans;
    }
};