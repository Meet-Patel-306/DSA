// Last updated: 18/08/2025, 18:34:45
class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans+=max(s[i],s[i+1])-min(s[i],s[i+1]);
            }
        return ans;

    }
};