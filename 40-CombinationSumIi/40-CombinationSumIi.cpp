// Last updated: 18/08/2025, 18:38:56
class Solution {
public:
    void makeBacktracking(vector<vector<int>>& ans,vector<int>& comb,int target,int index,int  sum,vector<int>& candidates){
        if(target==sum){
            ans.push_back(comb);
            return;
        }
        if(sum > target || index >= candidates.size()){
            return;
        }
        for(int i = index;i <candidates.size();i++){
            if(i>index && candidates[i] == candidates[i-1] ) continue;
            if(candidates[i]>target) break;
            comb.push_back(candidates[i]);
            makeBacktracking(ans,comb,target,i+1,sum+candidates[i],candidates);
            comb.pop_back();
        }
        // cout<<index<<" 0 "<<candidates[index]<<endl;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> comb;
        makeBacktracking(ans,comb,target,0,0,candidates);
        return ans;
    }
};