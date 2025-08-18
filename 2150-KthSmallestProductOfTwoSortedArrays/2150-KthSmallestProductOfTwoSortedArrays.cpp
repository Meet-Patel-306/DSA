// Last updated: 18/08/2025, 18:35:44
class Solution {
public:
    long long countProdLessOrEq(vector<int>& a, vector<int>& b,
                                long long target) {
        long long count = 0;
        for (int i : a) {
            if (i == 0) {
                if (target >= 0)
                    count += b.size();
                continue;
            }
            int low = 0, high = b.size();
            while (low < high) {
                int mid = (high + low) / 2;
                long long prod = 1LL * i * b[mid];
                if (prod <= target) {
                    if (i > 0) {
                        low = mid + 1;
                    } else {
                        high = mid;
                    }
                } else {
                    if (i > 0) {
                        high = mid;
                    } else {
                        low = mid + 1;
                    }
                }
            }
            count += (i > 0) ? low : (b.size() - low);
        }
        return count;
    }
    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2,
                                 long long k) {
        long long l = -1e10, r = 1e10;
        while (l < r) {
            long long mid = l + (r - l) / 2;
            if (countProdLessOrEq(nums1, nums2, mid) < k)
                l = mid + 1;
            else
                r = mid;
        }
        return l;
    }
};