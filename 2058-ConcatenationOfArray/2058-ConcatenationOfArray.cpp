// Last updated: 18/08/2025, 18:35:56
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int c=0;
        vector<int> ans;
        while(c<2){
            for(int i:nums){
                ans.push_back(i);
                }
            c++;
            }
        return ans;
    }
};