// Last updated: 18/08/2025, 18:34:40
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> um;
        for(int i:nums){
            um[i]++;
            }
        int ans=0;
        for(auto &i:um){
            
            if(i.second==2){
                ans=ans^i.first;
                }
            }
        return ans;
    }
};