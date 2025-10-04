// Last updated: 04/10/2025, 18:42:24
class Solution {
public:
    bool eq(vector<int>& nums){
        int n = nums.size();
        for(int i = 0;i<n-1;i++){
            if(nums[i]!=nums[i+1]) return false;
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int ans = 0;
        return eq(nums) ? 0:1;
    }
};