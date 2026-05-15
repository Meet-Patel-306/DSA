// Last updated: 15/05/2026, 17:44:55
class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string ans = "";

        for(char c:s){
            if(c == '('){
                if(count>0) ans+=c;
                count++;
            }
            if(c == ')'){
                if(count>1) ans+=c;
                count--;
            }
        }
        return ans;
    }
};