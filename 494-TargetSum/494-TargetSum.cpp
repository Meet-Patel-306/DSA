// Last updated: 15/05/2026, 17:46:53
class Solution {
public:
    void solve(vector<int>& nums, int target,int *count,int i,int sum){
        if(i == nums.size()){
            if(sum == target){
                (*count)++;
            }
            return;
        }
        solve(nums,target,count,i+1,sum+nums[i]);
        solve(nums,target,count,i+1,sum-nums[i]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int count = 0;
        solve(nums,target,&count,0,0);
        return count;
    }
};