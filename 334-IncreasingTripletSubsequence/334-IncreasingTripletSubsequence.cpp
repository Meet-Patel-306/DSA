// Last updated: 18/08/2025, 18:38:05
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int i=INT_MAX,j=INT_MAX;
        for(int k=0;k<n;k++){
            if(nums[k]<=i){
                i=nums[k];
                }
            else if(nums[k]<=j){
                j=nums[k];
                }
            else{
                return true;
                }
            }
        return false;
    }
};