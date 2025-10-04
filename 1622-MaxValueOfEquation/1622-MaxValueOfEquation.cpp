// Last updated: 04/10/2025, 18:44:44
class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int n = points.size();
        int maxval = INT_MIN;
        priority_queue<pair<int,int>> pq;
        for(int i = 0;i<n;i++){
            while(!pq.empty() && abs(points[i][0]-pq.top().second)>k){
                pq.pop();
            }
            if(!pq.empty()){
                maxval = max(maxval,points[i][0]+points[i][1]+pq.top().first);
            }
            pq.push({points[i][1]-points[i][0],points[i][0]});
        }
        return maxval;
    }
};