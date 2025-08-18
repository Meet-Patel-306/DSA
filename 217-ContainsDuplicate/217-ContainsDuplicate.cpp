// Last updated: 18/08/2025, 18:38:20
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_map<int,int> um;
        for(int i:nums){
            um[i]++;
            if(um[i]>1)
                return true;
            }
        return false;
    }
};