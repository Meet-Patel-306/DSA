// Last updated: 15/05/2026, 17:45:26
class Solution {
public:
    int solve(vector<int>& nums, int goal){
        if (goal < 0) return 0;
        int n = nums.size();
        int ans = 0;
        int r = 0;
        int l = 0;
        int sum = 0;
        while(r<n){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans = 0;
        int n = nums.size();
        // for(int i = 0;i<n;i++){
        //     int sum = 0;
        //     for(int j = i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum==goal) ans++;
        //     }
        // }
        // return ans;
        return solve(nums, goal) - solve(nums, goal - 1);

    }
};