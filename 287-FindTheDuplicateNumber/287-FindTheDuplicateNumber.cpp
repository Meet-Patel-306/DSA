// Last updated: 18/08/2025, 18:38:09
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int> um;
        for(int i = 0;i<nums.size();i++){
            if(um[nums[i]]>0) return nums[i];
            um[nums[i]]++;
        }
        return 0;
    }
};