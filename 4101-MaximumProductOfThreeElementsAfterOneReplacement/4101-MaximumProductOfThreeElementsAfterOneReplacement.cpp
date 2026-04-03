// Last updated: 03/04/2026, 15:58:57
class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<long long> prod;
        int n = nums.size();
        long long ans = INT_MIN;
        vector<int> idx = {0,1,2,n-1,n-2,n-3};
        for(int i : idx){
            for(long long val : {100000,-100000}){
                vector<long long> temp(nums.begin(),nums.end());

                temp[i] = val;

                long long a = 1LL*temp[0]*temp[1]*temp[2];
                long long b = 1LL*temp[n-1]*temp[n-2]*temp[n-3];
                long long c = 1LL*temp[0]*temp[n-1]*temp[n-2];
                long long d = 1LL*temp[n-1]*temp[0]*temp[1];
                long long e = 1LL*temp[0]*temp[1]*temp[n-1];
                long long f = 1LL*temp[n-1]*temp[n-2]*temp[0];
                prod.push_back(max({a,b,c,d,e,f}));
            }
        }
        for(long long i:prod){
            ans = max(ans,i);
        }
        return ans;
    }
};