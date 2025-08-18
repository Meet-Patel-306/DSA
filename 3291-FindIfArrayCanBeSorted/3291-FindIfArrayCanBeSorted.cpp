// Last updated: 18/08/2025, 18:34:51
class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> nums2=nums;
        unordered_map<int,int> um;
        sort(nums2.begin(),nums2.end());
        for(int i:nums){
            um[i]=__builtin_popcount(i);
            }
        bool s;
        for(int i=0;i<n;i++){
            s=true;
            for(int j=0;j<n-i-1;j++){
                if((um[nums[j]]==um[nums[j+1]])&&(nums[j]>nums[j+1])){
                    swap(nums[j],nums[j+1]);
                    s=false;
                    }
                }
            if(s) break;
            }
        return nums==nums2;
    }
};