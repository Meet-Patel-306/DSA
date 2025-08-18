// Last updated: 18/08/2025, 18:35:25
class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) { 
        vector<int> startV;
        vector<int> endV;
        int n=intervals.size();
        for(int i=0;i<n;i++){
            startV.push_back(intervals[i][0]);
            endV.push_back(intervals[i][1]);
            }
        sort(startV.begin(),startV.end());
        sort(endV.begin(),endV.end());
        int endPtr=0;
        int c=0;
        for(int i:startV){
            if(i>endV[endPtr])
                endPtr++;
            else
                c++;
            }
        return c;
    }
};