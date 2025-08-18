// Last updated: 18/08/2025, 18:39:28
class Solution {
public:
    bool palindrome(string s) {
        int i = 0;
        int n = s.length();
        while (i < n / 2) {
            if (s[i] != s[n - i - 1]) {
                return false;
            }
            i++;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int maxlen = 0;
        string ans = "";
        int n = s.length();
        // for(int i = 0;i<n;i++){
        //     for(int j=1;j<n-i+1;j++){
        //         if(palindrome(s.substr(i,j))){
        //             if(maxlen <= j){
        //                 maxlen = j;
        //                 // cout<<j<<endl;
        //                 ans = s.substr(i,j);
        //             }
        //         }
        //     }
        // }
        // // cout<<ans.length();
        // return ans;
        int start = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<=1;j++){
                // j = 0 -> odd len
                // j = 1 -> even len
                int l = i;
                int h = i+j;
                while(l>=0 && h<n && s[l] == s[h]){
                    if(h-l+1>maxlen){
                        maxlen = h-l+1;
                        start = l;
                    }
                    h++;
                    l--;
                }
            }
        }
        
        return s.substr(start,maxlen);
    }
};