// Last updated: 18/08/2025, 18:39:27
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int t=n+m;
        vector<int> nums(t);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums.begin());
        if(t%2!=0){
            t=t-1;
            t/=2;
            double a=nums[t];
            return a;
            }
        else{
            t/=2;
            double a=nums[t]+nums[t-1];
            a/=2;
            return a;
            }
    }
};