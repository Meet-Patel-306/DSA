// Last updated: 03/04/2026, 15:58:56
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int i = nums[0];
        int n = nums[nums.size()-1];
        for(i ;i<=n;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()) ans.push_back(i);
        }
        return ans;
    }
};