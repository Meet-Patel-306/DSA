// Last updated: 18/08/2025, 18:37:56
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        int sI=0,tI=0;
        while(sI<n && tI<m){
            if(s[sI]==t[tI]){
                sI++;
                }
            tI++;
            }
        if(sI==n)
            return true;
        return false;
    }
};