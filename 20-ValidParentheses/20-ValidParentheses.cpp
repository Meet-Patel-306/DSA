// Last updated: 18/08/2025, 18:39:14
class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        int cl = 0;
        for(char c: str){
            if(c == '(' || c =='[' || c == '{'){
                s.push(c);
            }
            if(s.empty() && (c == ')' || c ==']' || c == '}')){
                return false;
            }
            if(s.top() == '(' && c == ')'){
                s.pop();
                cl+=2;
            }else if(s.top() == '[' && c == ']'){
                s.pop();
                cl+=2;
            }else if(s.top() == '{' && c == '}'){
                s.pop();
                cl+=2;
            }
        }
        // cout<<s.top();
        if(s.empty() && cl == str.length()) return true;
        return false;
    }
};