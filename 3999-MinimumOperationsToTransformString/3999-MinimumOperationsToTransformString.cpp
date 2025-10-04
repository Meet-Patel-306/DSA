// Last updated: 04/10/2025, 18:42:25
class Solution {
public:
    int minOperations(string s) {
       unordered_map<char,int> um;
        int ac = 0;
        char cm;
        for(char c:s){
            if(c!='a'){
                cm = c;
                break;
            }
        }
        for(char c:s){
            um[c]++;
            if(c!='a' && cm>c){
                cm = c;
            }
            if(c == 'a') ac++;
        }
        if(ac == s.length()) return 0;
        int ans = abs((int)'z'-(int)cm);
        
        // for(auto [c,i]:um){
            
        // }
        return ans+1;
    }
};