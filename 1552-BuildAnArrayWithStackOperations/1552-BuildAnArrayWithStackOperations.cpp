// Last updated: 15/05/2026, 17:44:01
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<int> seen(n+1,0);
        for(int i:target) seen[i] = 1;
        int len = 0;
        int n_target = target.size();
        vector<string> ans;
        int i = 1;
        while(len != n_target){
            if(seen[i]){
                ans.push_back("Push");
                len++;
            }else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            i++;
        }
        return ans;
    }
};