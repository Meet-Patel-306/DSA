// Last updated: 15/05/2026, 17:41:25
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i:nums){
            string num = to_string(i);
            for(char c:num) ans.push_back(c-'0');
        }
        return ans;
    }
};