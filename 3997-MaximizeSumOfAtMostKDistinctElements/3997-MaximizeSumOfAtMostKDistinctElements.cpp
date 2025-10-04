// Last updated: 04/10/2025, 18:42:26
class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> ans;
        for(int i = n-1;i>=0;i--){
            if(k>0 && find(ans.begin(),ans.end(),nums[i]) == ans.end()){
                ans.push_back(nums[i]);
                k--;
            }
        }
        return ans;
    }
};