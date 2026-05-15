// Last updated: 15/05/2026, 17:46:08
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> v(n,-1);
        stack<int> st;
        for(int i = n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]) st.pop();
            if(!st.empty()) v[i] = st.top();
            st.push(i);
        }
        // for(int i:v) cout<<i<<" ";
        vector<int> ans;
        for(int i = 0;i<n;i++){
            int d = v[i] == -1 ? i:v[i];
            ans.push_back(abs(i-d));
        }
        return ans;
    }
};