// Last updated: 15/05/2026, 17:46:32
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int a = nums[n-1]*nums[n-2]*nums[n-3];
        // in case -ve num
        int b = nums[0]*nums[1]*nums[n-1];
        int c = nums[0]*nums[1]*nums[2];
        return max({a,b,c});
    }
};