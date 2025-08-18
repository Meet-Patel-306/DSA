// Last updated: 18/08/2025, 18:39:08
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
                }
            }
        cout<<j;
        return j;
    }
};