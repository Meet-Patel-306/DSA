// Last updated: 18/08/2025, 18:38:23
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int minI=INT_MAX,c_sum=0;
        for(int r=0;r<n;r++){
            c_sum+=nums[r];
            while(c_sum>=target){
                minI=min(minI,r-l+1);
                c_sum-=nums[l];
                l++;
                }
            }
        return minI==INT_MAX?0:minI;
    }
};