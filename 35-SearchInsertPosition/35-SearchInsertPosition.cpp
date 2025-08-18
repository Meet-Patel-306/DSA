// Last updated: 18/08/2025, 18:38:59
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,mid;
        if(nums[e]<target){
            return e+1;
            }

        while(s<=e){
            mid=(s+e)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>target)
                e=mid-1;
            else
                s=s+1;
            }
        return s;
    }
};