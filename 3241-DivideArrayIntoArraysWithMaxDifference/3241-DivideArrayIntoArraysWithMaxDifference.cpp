// Last updated: 18/08/2025, 18:34:53
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        int c = 0;
        for(int i=0;i<n;i+=3){
            vector<int> temp = {nums[i],nums[i+1],nums[i+2]};
            if(temp[2]-temp[0]<=k){
                ans.push_back(temp);
                c++;
            }
            if(c==(n/3)) break;
        }
        if(c==(n/3)) return ans;
        return {};
    }
};