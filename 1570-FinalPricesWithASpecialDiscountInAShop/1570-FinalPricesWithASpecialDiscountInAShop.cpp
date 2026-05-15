// Last updated: 15/05/2026, 17:43:56
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> rank(n,-1);
        stack<int> st;
        for(int i = n-1;i>=0;i--){
            while(!st.empty() && st.top()>prices[i]) st.pop();
            if(!st.empty()) rank[i] = st.top();
            st.push(prices[i]);
        }
        vector<int> ans;
        // for(int i:rank){
        //     cout<<i<<" ";
        // }
        for(int i = 0;i<n;i++){
            int discount = rank[i] == -1 ? 0:rank[i];
            ans.push_back(prices[i]-discount);
        }
        return ans;
    }
};