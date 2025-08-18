// Last updated: 18/08/2025, 18:36:21
class Solution {
public:
    int maxVowels(string s, int k) {
        string vowel="aeiou";
        int n=s.length();
        int c=0;
        for(int i=0;i<k;i++){
            if(vowel.find(s[i])!=string::npos){
                c++;
                }
            }
        int ans=c;
        for(int i=k;i<n;i++){
            if(vowel.find(s[i-k])!=string::npos){
                c--;
                }
            if(vowel.find(s[i])!=string::npos){
                c++;
                }
            ans=max(ans,c);
            }
        return ans;
    }
};