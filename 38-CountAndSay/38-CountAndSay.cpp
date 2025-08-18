// Last updated: 18/08/2025, 18:39:00
class Solution {
public:
    string freqCount(string s){
       string ans = "";
       int c = 1;
       for(int i = 1;i<s.length();i++){
        if(s[i]==s[i-1]){
            c++;
        }else{
            ans+=to_string(c)+s[i-1];
            c=1;
        }
       }
       ans+=to_string(c)+s[s.length()-1];
        return ans;
    }
    string countAndSay(int n) {
        string ans = "1";
        if(n == 1) return ans;
        // ans+="1";
        for(int i = 1;i < n;i++){
            ans = freqCount(ans);
        }
        return ans;
    }
};