// Last updated: 18/08/2025, 18:34:32
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> a;
        for(int i:nums){
            a[i]++;
            }
        for(int i:nums){
            if(a[i]==2 && find(ans.begin(),ans.end(),i)==ans.end())
                ans.push_back(i);
            }
        return ans;
    }
};