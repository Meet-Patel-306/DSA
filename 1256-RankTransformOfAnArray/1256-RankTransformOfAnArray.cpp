// Last updated: 18/08/2025, 18:36:44
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> m;
        vector<int> copy=arr;
        sort(arr.begin(),arr.end());
        int rank=1;
        for(int i=0;i<arr.size();i++){
            if(m.find(arr[i])!=m.end()) continue;
            m[arr[i]]=rank;
            rank++;
            }
        vector<int> ans(arr.size(),0);
        for(int i=0;i<arr.size();i++){
            ans[i]=m[copy[i]];
            }
        return ans;
    }
};