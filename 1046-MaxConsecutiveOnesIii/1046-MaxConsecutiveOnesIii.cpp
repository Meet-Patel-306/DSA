// Last updated: 18/08/2025, 18:36:55
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int j=0;
        int ans=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c++;
                }
            while(c>k){
                if(nums[j]==0){
                    c--;
                   }
                j++;
                }
            ans=max(ans,i-j+1);
            }
        return ans;
    }
};