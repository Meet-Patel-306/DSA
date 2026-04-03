// Last updated: 03/04/2026, 15:59:35
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long sum = 0;
        for(int x : nums) sum += x;
        return sum % k;
    }
};