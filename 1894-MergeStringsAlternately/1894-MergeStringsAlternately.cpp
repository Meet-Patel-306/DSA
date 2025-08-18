// Last updated: 18/08/2025, 18:36:04
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word="";
        int n=word1.length();
        int m=word2.length();
        int i=0,j=0;
        while(i<n || j<m){
            if(i<n){
                word+=word1[i];
                i++;
                }
            if(j<m){
                word+=word2[j];
                j++;
                }
            }
        return word;
    }
};