// Last updated: 18/08/2025, 18:35:36
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=words.size();
        int pn=pref.length();
        int ans=0;
        for(int i=0;i<n;i++){
            int a=1;
            if(words[i].length()>=pn){
            for(int j=0;j<pn;j++){
                if(words[i][j]!=pref[j]){
                    a=0;
                    }
                  }
                }
            else{ a=0;}
            if(a) ans++;
            }
        return ans;
    }
};