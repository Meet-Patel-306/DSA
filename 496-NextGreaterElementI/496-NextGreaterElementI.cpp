// Last updated: 18/08/2025, 18:37:47
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i : nums1){
            int j = 0;
            for(int k = 0;k<nums2.size();k++){
                if(nums2[k] == i){
                    j = k+1;
                    break;
                }
            }
            int nextG = -1;
            for(int k = j;k<nums2.size();k++){
                if(nums2[k]>i){
                    nextG = nums2[k];
                    break;
                }
            }
            ans.push_back(nextG);
        }
        return ans;
    }
};