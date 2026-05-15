// Last updated: 15/05/2026, 17:41:08
class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxe = 1;
        int n = nums.size();
        int j = 1;
        unordered_map<int,int> um;
        for(int i : nums){
            maxe = max(maxe,i);
            um[i]++;
        }
        for(int i:nums){
            if(!um[j]) return false;
            if(i != maxe && um[i]>1) return false;
            if(j!=maxe) j++;
        }
        if(um[maxe]!=2) return false;
        return true;
    }
};