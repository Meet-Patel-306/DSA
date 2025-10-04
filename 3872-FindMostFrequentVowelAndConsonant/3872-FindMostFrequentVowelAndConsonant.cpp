// Last updated: 04/10/2025, 18:42:22
class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> v,cn;
        string vowel = "aeiou";
        for(char c:s){
            if(vowel.find(c)!=string::npos){
                v[c]++;
            }else{
                cn[c]++;
            }
        }
        int maxv = 0,maxc = 0;
        for(auto [c,i]:v){
            maxv = max(maxv,i);
        }
        for(auto [c,i]:cn){
            maxc = max(maxc,i);
        }
        return maxv + maxc;
    }
};