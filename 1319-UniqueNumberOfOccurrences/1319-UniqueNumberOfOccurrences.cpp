// Last updated: 18/08/2025, 18:36:38
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> um,map;
        
        for(int i:arr){
            um[i]++;
            }
        for(auto &i:um){
            map[i.second]++;
            if(map[i.second]>1)
                return false;
            }
        return true;
    }
};