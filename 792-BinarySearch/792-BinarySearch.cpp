// Last updated: 18/08/2025, 18:37:25
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int mid=(s+e)/2;
        sort(nums.begin(),nums.end());
        while(s<=e){
            if(nums[mid]==target){
                return mid;
                }
            if(nums[mid]<target){
                s=mid+1;
                }
            else{
                e=mid-1;
                }
            mid=(s+e)/2;
            }
        return -1;
    }
};