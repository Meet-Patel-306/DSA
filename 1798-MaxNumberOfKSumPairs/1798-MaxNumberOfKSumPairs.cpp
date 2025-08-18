// Last updated: 18/08/2025, 18:36:07
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=n-1,c=0;
        while(i<j){
            if(nums[i]+nums[j]==k){
                c++;
                i++;
                j--;
            }
            if(nums[i]+nums[j]<k)
                i++;
            else if(nums[i]+nums[j]>k)
                j--;
            }
        return c;
    }
};