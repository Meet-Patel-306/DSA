// Last updated: 18/08/2025, 18:38:13
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> um;
        for(char c:s){
            um[c]++;
        }
        for(char c:t){
            um[c]--;
        }
        for(auto pair: um){
            if(pair.second>0 || pair.second<0) return false;
        }
        return true;
    }
};