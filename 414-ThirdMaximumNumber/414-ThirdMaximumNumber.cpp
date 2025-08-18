// Last updated: 18/08/2025, 18:37:53
class Solution {
public:
    int thirdMax(vector<int>& nums) {
       int l=nums.size();
        if(l<3){
             sort(nums.begin(),nums.end());
            return nums[l-1];;
            }
        sort(nums.begin(),nums.end());
        auto it=unique(nums.begin(),nums.end());
        nums.erase(it,nums.end());
        int n=nums.size();
        if(n<3){
            return nums[n-1];
            }
        return nums[n-3];
    }
};