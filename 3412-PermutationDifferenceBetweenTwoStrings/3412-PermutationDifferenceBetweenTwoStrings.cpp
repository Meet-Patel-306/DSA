// Last updated: 18/08/2025, 18:34:44
class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n=s.length();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s[i]==t[j])
                    c+=max(i,j)-min(i,j);
                }
            }
        return c;
    }
};