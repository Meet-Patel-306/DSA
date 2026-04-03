// Last updated: 03/04/2026, 16:00:11
class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 0, prev = -1e9;

        for (int i = 0; i < nums.size(); i++) {
            int l = max(nums[i] - k, prev + 1);
            if (l <= nums[i] + k) {
                prev = l, ans++;
            }
        }
        return ans;
    }
};