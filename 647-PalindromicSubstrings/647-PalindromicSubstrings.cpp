// Last updated: 18/08/2025, 18:37:31
class Solution {
public:
    bool palindromic(string s){
        for(int i = 0;i<s.length()/2;i++){
            if(s[i]!=s[s.length()-1-i]){
                return false;
            }
        }
        return true;
    }
    int countSubstrings(string s) {
        int ctn = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
            for(int j = 1;j<=n-i;j++){
                string str = s.substr(i,j);
                if(palindromic(str)) {
                    // cout<<str<<endl;
                   ctn++;
                }
            }
        }
        return ctn;
    }
};