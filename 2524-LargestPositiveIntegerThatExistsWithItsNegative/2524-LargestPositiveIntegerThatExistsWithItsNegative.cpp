// Last updated: 18/08/2025, 18:35:19
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(binary_search(nums.begin(),nums.end(),-nums[i])){
               
              return -nums[i];
                }
            }
        return -1;
    }
};