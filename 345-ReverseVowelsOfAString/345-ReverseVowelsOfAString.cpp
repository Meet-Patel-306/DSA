// Last updated: 18/08/2025, 18:38:01
class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                v.push_back(c);
                }
            }
        reverse(v.begin(),v.end());
        string ans="";
        int i=0;
        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                ans.push_back(v[i]);
                i++;
                }
            else{
                ans.push_back(c);
                }
            }
        return ans;
    }
};