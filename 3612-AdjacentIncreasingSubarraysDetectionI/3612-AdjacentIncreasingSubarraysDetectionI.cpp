// Last updated: 03/04/2026, 16:00:15
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int inc = 1,preinc = 0,maxlen = 0;
        for(int i =1;i<n;i++){
            if(nums[i-1]<nums[i]) inc++;
            else{
                preinc = inc;
                inc = 1;
            }
            maxlen = max(maxlen,max(inc>>1,min(preinc,inc)));
            if(maxlen>=k) return true;
        }
        return false;
    }
};