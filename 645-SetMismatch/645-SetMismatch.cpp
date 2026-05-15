// Last updated: 15/05/2026, 17:46:27
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> um;
        vector<int> ans;
        for(int i:nums) um[i]++;
        int n = nums.size();
        vector<int> temp;
        for(int i = 1;i<=n;i++){
            if(um.find(i)!=um.end()){
                if(um[i]>1) ans.push_back(i);
            }else{
                temp.push_back(i);
            }
        }
        for(int i:temp) ans.push_back(i);
        return ans;
    }
};