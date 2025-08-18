// Last updated: 18/08/2025, 18:34:26
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
     int maxD = INT_MIN;
     for(int i = 0;i<nums.size()-1;i++){
        maxD = max(maxD,abs(nums[i]-nums[i+1]));
    }
    maxD = max(maxD,abs(nums[nums.size()-1]-nums[0]));
    return maxD;   
    }
};