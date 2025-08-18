// Last updated: 18/08/2025, 18:38:32
class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n=s.length();
        for(int i=0;i<n;i++){
            string str="";
            while(s[i]==' ' && i<n){
                i++;
                if(i>=n)
                    break;
                }
            int j=i;
            while(j<n && s[j]!=' '){
                str+=s[j];
                j++;
                }
            
            if(str.length()>0){
                if(ans.length()==0){
                    ans=str;
                    }
                else
                    ans=str+" "+ans;
                i=j;
                }
            
            }
        return ans;
    }
};