// Last updated: 18/08/2025, 18:38:17
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n);
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
            }
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
            }
        for(int i=0;i<n;i++){
            a[i]=prefix[i]*suffix[i];
            }
        
        return a;
    }
};