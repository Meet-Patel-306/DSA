// Last updated: 18/08/2025, 18:38:55
class Solution {
public:
    void permutationsArr(vector<vector<int>> &ans,vector<int> nums,int index){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            permutationsArr(ans,nums,index+1);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> ans;
       int n = nums.size();
       permutationsArr(ans,nums,0);
       return ans;
    }
};