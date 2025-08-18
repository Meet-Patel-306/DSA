// Last updated: 18/08/2025, 18:35:03
class Solution {
public:
    int minLength(string s) {
        while(true){
            string l="";
            if(s.find("AB")!=string::npos || s.find("CD")!=string::npos){
                for(int i=0;i<s.length();i++){
                    if((s[i]=='A'&&s[i+1]=='B')||(s[i]=='C'&&s[i+1]=='D')){
                        i=i+1;
                        //cout<<i<<"--"<<i-1<<endl;
                        continue;
                        }
                    //cout<<i<<endl;
                    //cout<<s[i]<<"-"<<i<<endl;
                    l+=s[i];
                    }
                }
            else{
                return s.length();
                }
            
            s=l;
            //cout<<s<<endl;
            }
    }
};