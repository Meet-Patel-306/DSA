// Last updated: 18/08/2025, 18:38:40
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = 0, r = 0;
        vector<int> temp;
        while (l < m && r < n) {
            if (nums1[l] <= nums2[r]) {
                // cout<<l<<" -l- "<<nums1[l]<<endl;
                temp.push_back(nums1[l]);
                l++;
            } else {
                temp.push_back(nums2[r]);
                // cout<<r<<" -- "<<nums2[r]<<endl;
                r++;
            }
        }
        while (l < m) {
            // cout<<l<<" -l- "<<nums1[l]<<endl;
            temp.push_back(nums1[l]);
            l++;
        }
        while (r < n) {
            // cout<<r<<" -- "<<nums2[r]<<endl;
            temp.push_back(nums2[r]);
            r++;
        }
        for (int i = 0; i < m + n; i++) {
            nums1[i] = temp[i];
            // cout<<"temp;- "<<temp[i];
        }
    }
};