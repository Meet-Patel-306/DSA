// Last updated: 18/08/2025, 18:35:50
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(string s: operations){
            if(s=="X++"||s=="++X"){
                ans++;
                }
            else{
                ans--;
                }
            }
        return ans;

    }
};