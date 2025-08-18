// Last updated: 18/08/2025, 18:36:50
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> a;
        for(int i:heights){
            a.push_back(i);
            }
        int n=heights.size();
        int c=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]!=heights[i]){
                c++;
                }
            }
        return c;
    }
};