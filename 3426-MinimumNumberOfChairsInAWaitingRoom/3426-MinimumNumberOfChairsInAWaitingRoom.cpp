// Last updated: 18/08/2025, 18:34:42
class Solution {
public:
    int minimumChairs(string s) {
        int ans=INT_MIN;
        int cou=0;
        for(char c:s){
            if(c=='E'){
                cou++;
                }
            else{
                cou--;
                }
            ans=max(ans,cou);
            }
        return ans;
    }
};