// Last updated: 18/08/2025, 18:37:57
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> um;
        for(char c:s){
            um[c]++;
            }
        for(char c:t){
            if(um.find(c)==um.end()){
                //if we do not fine element so find() return end index
                return c;
                }
            if(um[c]>1){
                um[c]--;
                }
            else
                um.erase(c);
            }
        return '1';
    }
};