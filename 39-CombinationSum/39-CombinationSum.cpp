// Last updated: 18/08/2025, 18:38:58
class Solution {
public:
    void makeBacktracking(vector<vector<int>>& ans,vector<int>& comb,int target,int index,int sum,vector<int>& candidates){
        if(sum == target){
            ans.push_back(comb);
            return;
        }
        if(sum > target || index >= candidates.size()){
            return;
        }
        comb.push_back(candidates[index]);
        makeBacktracking(ans,comb,target,index,sum+candidates[index],candidates);
        comb.pop_back();
        makeBacktracking(ans,comb,target,index+1,sum,candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        makeBacktracking(ans,comb,target,0,0,candidates);
        return ans;
    }
};