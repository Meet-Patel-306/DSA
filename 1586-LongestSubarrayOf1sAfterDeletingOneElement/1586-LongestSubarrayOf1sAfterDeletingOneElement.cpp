// Last updated: 30/08/2025, 19:04:41
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        int maxl = 0;
        int j = 0,i=0,zero=0;
        for(i = 0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }
            while(zero>1){
                if(nums[j]==0) zero--;
                j++;
            }
            maxl = max(maxl,i-j);
        }
        return maxl;
    }
};