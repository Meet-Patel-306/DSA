// Last updated: 18/08/2025, 18:36:05
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size(),c=0;
        for(int i =0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                //cout<<nums[i];
                c++;
                }
            }
        if(nums[n-1]>nums[0])
            c++;
        //cout<<c;
        return c<=1;
    }
};