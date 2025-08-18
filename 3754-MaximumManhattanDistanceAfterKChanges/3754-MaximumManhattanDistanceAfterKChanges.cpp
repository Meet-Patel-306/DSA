// Last updated: 18/08/2025, 18:34:21
class Solution {
public:
    int maxDistanceDirection(char a,char b,int k,string s){
        int d = 0,md = 0;
        for(int i = 0;i<s.length();i++){
            if(a==s[i] || b==s[i]){
                d++;
            }
            else{
                if(k>0){
                    d++;
                    k--;
                }else{
                    md = max(md,d);
                    d--;
                }
            }
        }
        md = max(md,d);
        return md;
    }
    int maxDistance(string s, int k) {
        int ne=maxDistanceDirection('N','E',k,s);
        int nw=maxDistanceDirection('N','W',k,s);
        int se=maxDistanceDirection('S','E',k,s);
        int sw=maxDistanceDirection('S','W',k,s);
        return max({ne,nw,se,sw});
    }
};