// Last updated: 04/10/2025, 18:43:09
class Solution {
public:
    string sortVowels(string s) {
        vector<char> v;
        for(char c:s){
            if(c == 'a' || c == 'o' || c == 'i' || c == 'u' || c == 'e' || c == 'A' || c == 'O' || c == 'I' || c == 'U' || c == 'E'){
                v.push_back(c);
            }
        }
        sort(v.begin(),v.end());
        int i = 0;
        string ans = "";
        for(char c:s){
            if(c == 'a' || c == 'o' || c == 'i' || c == 'u' || c == 'e' || c == 'A' || c == 'O' || c == 'I' || c == 'U' || c == 'E'){
                ans+=v[i];
                i++;
            }
            else{
                ans+=c;
            }
        }
        return ans;
    }
};