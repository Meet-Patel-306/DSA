// Last updated: 18/08/2025, 18:34:36
class Solution {
public:
    string clearDigits(string s) {
        string ans="";
        for(char c:s){
            if((c>='a'&&c<='z')||(c>='A'&& c<='Z')){
                ans+=c;
                }
               else{
                   int l=ans.length();
                   l-=1;
                   ans.pop_back();
                   }
               }
        return ans;
               
    }
};