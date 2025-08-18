// Last updated: 18/08/2025, 18:36:32
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        int n=queries.size();
        for(int i=0;i<n;i++){
            int s=queries[i][0];
            int e=queries[i][1];
            int x=arr[s];
            s++;
            while(s<=e){
                x^=arr[s];
                s++;
             }
            ans.push_back(x);
            }
        return ans;
    }
};