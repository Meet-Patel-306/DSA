// Last updated: 18/08/2025, 18:34:59
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans=0;
        for(int i:hours){
            if(i>=target)
                ans++;
            }
        return ans;
    }
};