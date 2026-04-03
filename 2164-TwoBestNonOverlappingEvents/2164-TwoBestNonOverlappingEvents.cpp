// Last updated: 03/04/2026, 16:02:21
class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int n = events.size();
        sort(events.begin(),events.end());
        vector<vector<int>> endevent = events;
        sort(endevent.begin(),endevent.end(),[](auto &a,auto &b){
            return a[1]<b[1];
        });
        vector<int> maxValueTill(n);
        maxValueTill[0] = endevent[0][2];
        for (int i = 1; i < n; i++) {
            maxValueTill[i] = max(maxValueTill[i - 1], endevent[i][2]);
        }
        int ans = 0;
        int j = 0;
        for(int i = 0;i<n;i++){
            int s = events[i][0];
            int e = events[i][1];
            int v = events[i][2];
            while(j<n && endevent[j][1]<s){
                j++;
            }
            ans = max(ans,v);
            if(j>0){
                ans = max(ans,v+maxValueTill[j-1]);
            }
        }
        return ans;
    }
};