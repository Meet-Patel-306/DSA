// Last updated: 18/08/2025, 18:36:30
class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        for(int i=0;i<s.length();i++){
            if(s[i]=='6'){
                s[i]='9';
                break;
            }
        }
        return stoi(s);
    }
};