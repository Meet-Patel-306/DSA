// Last updated: 03/04/2026, 15:59:02
class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            unordered_map<int, int> um;
            int e = 0,o = 0;
            int j;
            for (j = i; j < n; j++){
                if(um[nums[j]] == 0){
                    if(nums[j]%2 == 0) e++;
                    else o++;
                }
                um[nums[j]]++;
                // cout << i << " " << j << endl;
                if (o == e)
                    ans = max(ans, abs(j - i) + 1);
                }
        }
        return ans == INT_MIN ? 0:ans;
    }
};