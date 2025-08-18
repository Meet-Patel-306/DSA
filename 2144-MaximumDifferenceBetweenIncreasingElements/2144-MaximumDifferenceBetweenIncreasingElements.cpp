// Last updated: 18/08/2025, 18:35:47
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mi = 1 << 30;
        int ans = -1;
        for (int& x : nums) {
            if (x > mi) {
                ans = max(ans, x - mi);
            } else {
                mi = x;
            }
        }
        return ans;
    }
};