// Last updated: 18/08/2025, 18:37:07
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                ans += nums[i-1]-nums[i]+1;
                nums[i]= nums[i-1]+1;
            }
        }
        return ans;
    }
};