// Last updated: 18/08/2025, 18:34:56
class Solution {
public:
    long long minimumSteps(string s) {
        long long ans=0;
        long long n=s.length();
        long long wball=0;
        for(char c:s){
            if(c=='0'){
                ans+=wball;
                }
            else{
                wball++;
                }
            }
        return ans;
    }
};