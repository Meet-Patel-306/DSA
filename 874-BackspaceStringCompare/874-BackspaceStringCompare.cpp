// Last updated: 15/05/2026, 17:45:40
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        for(char c: s){
            if(!st.empty() && c == '#'){
                st.pop();
            }else if(c!='#'){
                st.push(c);
            }
        }
        string s2 = "";
        while(!st.empty()){
            s2+=st.top();
            st.pop();
        }
        for(char c: t){
            if(!st.empty() && c == '#'){
                st.pop();
            }else if(c!='#'){
                st.push(c);
            }
        }
        string t2 = "";
        while(!st.empty()){
            t2+=st.top();
            st.pop();
        }
        cout<<s2<<" "<<t2<<endl;
        return s2 == t2;
    }
};