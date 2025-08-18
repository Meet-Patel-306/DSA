// Last updated: 18/08/2025, 18:38:50
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int sum = 0;
       int n = nums.size();
       int maxA = INT_MIN;
       for(int i = 0;i<n;i++){
        sum += nums[i];
        if(sum>maxA){
            maxA = sum;
        }
        if(sum<0){
            sum = 0;
        }
       }

       return maxA;
    }
};