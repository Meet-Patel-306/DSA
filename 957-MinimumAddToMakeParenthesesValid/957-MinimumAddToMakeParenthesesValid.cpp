// Last updated: 18/08/2025, 18:37:09
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count=0;
        for(char c:s){
            if(c=='('){
                st.push(c);
                }
            else{
                if(st.empty())
                    count++;
                else{
                    st.pop();
                    }
                }
            }
        //cout<<count;
        return count+st.size();
    }
};