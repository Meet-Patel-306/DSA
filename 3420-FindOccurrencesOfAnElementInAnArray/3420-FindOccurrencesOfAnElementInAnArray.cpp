// Last updated: 18/08/2025, 18:34:43
class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> index;
        vector<int> ans;
        int c = 0;
        for(int i =0;i< nums.size();i++){
            if(nums[i] == x){
                c++;
                index.push_back(i);
            }
        }
        for(int i : queries){
            if(i<=index.size()){
                ans.push_back(index[i-1]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};