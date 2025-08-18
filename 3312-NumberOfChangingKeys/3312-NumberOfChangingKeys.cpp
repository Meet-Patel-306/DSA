// Last updated: 18/08/2025, 18:34:48
class Solution {
public:
    int countKeyChanges(string s) {
        int c=0;
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
           }
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1]){
                c++;
                }
            }
        return c;
    }
};