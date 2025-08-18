// Last updated: 18/08/2025, 18:35:29
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n = nums.size(),ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            cout<<i<<" s"<<endl;
            int j = i;
            int flag = 1;
            while(j<n && (nums[j]-nums[i])<=k){
                j++;
            }
            ans++;
            cout<<i<<" "<<j<<endl;
            i=j-1;
        }
        return ans;
    }
};