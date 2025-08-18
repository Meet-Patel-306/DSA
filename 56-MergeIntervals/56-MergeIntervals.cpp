// Last updated: 18/08/2025, 18:38:48
class Solution {
public:
    static bool compareRowByCol(const vector<int>& row1,const vector<int>& row2){
        return row1[0]<row2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end(),compareRowByCol);
        int n=intervals.size();
        int i = 0;
        int s,e;
        while(i<n){
            //cout<<i<<endl;
            s=intervals[i][0];
            e=intervals[i][1];
            i++;
            while(i<n && intervals[i][0]<=e){
                if(e>intervals[i][1]) {
                    i++;
                    continue;
                }
                e=intervals[i][1];
                i++;
            }
            ans.push_back({s,e});
        }
        return ans;
    }
};