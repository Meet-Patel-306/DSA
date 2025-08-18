// Last updated: 18/08/2025, 18:35:59
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            ans.push_back(nums[nums[i]]);
        }
            return ans;
    }
};