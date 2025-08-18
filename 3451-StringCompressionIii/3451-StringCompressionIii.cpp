// Last updated: 18/08/2025, 18:34:35
class Solution {
public:
    string compressedString(string word) {
        int n=word.length();
        int i=0;
        string a="";
        while(i<n){
            char c=word[i];
            int count=0;
            while(word[i]==c&&i<n&&count<9){
                i++;
                count++;
                }
            a+=to_string(count);
            a+=c;
            }
        return a;
    }
};