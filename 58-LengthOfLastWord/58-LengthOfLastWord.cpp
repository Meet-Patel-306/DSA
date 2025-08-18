// Last updated: 18/08/2025, 18:38:47
class Solution {
public:
    int lengthOfLastWord(string s) {

        int a=0;
        int count=1;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ' && a==0){
                //no work do
                }
            else if(s[i]!=' ' && a==0){
                a++;
                }
            else if(s[i]!=' ' && a!=0){
                count++;
                }
            else if(s[i]==' ' && a!=0){
                break;
                }
            }
        return count;

    }
};