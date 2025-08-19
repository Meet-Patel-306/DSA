// Last updated: 19/08/2025, 19:02:24
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        long long ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) c++;
            else{
                if(c!=0){
                    ans+=(long long)c*(c+1)/2;
                }
                c=0;
            }
        }
        if(c!=0){
            ans+=(long long)c*(c+1)/2;
        }
        return ans;
    }
};