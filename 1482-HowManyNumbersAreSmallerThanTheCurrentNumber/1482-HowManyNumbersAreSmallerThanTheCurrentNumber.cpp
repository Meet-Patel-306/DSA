// Last updated: 15/05/2026, 17:44:14
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        unordered_map<int,pair<int,int>> um;
        int n = nums.size();
        vector<int> ans;
        int rank = 1;
        for(int i:temp){
            if(um.find(i) != um.end()){
                um[i].second++;
            }else{
                um[i] = {rank,1};
            }
            rank++;
        }
        for(int i:nums){
            ans.push_back((n-um[i].first-um[i].second+1));
        }
        return ans;
    }
};