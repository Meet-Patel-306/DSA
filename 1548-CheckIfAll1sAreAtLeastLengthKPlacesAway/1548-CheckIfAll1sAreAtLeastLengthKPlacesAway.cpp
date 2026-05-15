// Last updated: 15/05/2026, 17:44:03
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        while(i<n && nums[i]!=1) i++;
        if(i==n-1) return false;
        for(int j=i+1;j<n;j++){
            if(nums[j] == 1){
                if((j-i-1)<k) return false;
                // cout<<i<<" "<<j<<endl;
                i=j;
            }
        }
        // if(l<k) return false;
        // if(nums[n-1] == 1 && ((n-i)<k))
        return true;
    }
};