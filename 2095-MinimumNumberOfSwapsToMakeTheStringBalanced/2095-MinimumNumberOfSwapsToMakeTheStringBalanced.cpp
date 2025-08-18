// Last updated: 18/08/2025, 18:35:54
class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        int count=0;
        for(char c:s){
            if(c=='['){
                st.push(c);
                }
            else{
                if(st.empty()) count++;
                else{
                    st.pop();
                    }
                }
            }
        int ans;
        if(count%2==0){
            ans=count/2;
            }
        else{
            ans=(count+1)/2;
            }
        return ans ;
    }
};