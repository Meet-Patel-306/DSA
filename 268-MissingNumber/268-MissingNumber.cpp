// Last updated: 18/08/2025, 18:38:12
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=0;
        int n=nums.size();
        while(i<n && j<=n){

            if(nums[i]!=j){
                return j;
                }
            i++;
            j++;
            }
        return j++;
    }
};