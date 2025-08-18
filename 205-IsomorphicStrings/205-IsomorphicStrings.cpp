// Last updated: 18/08/2025, 18:38:25
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> ms,mt;

        if(s.length()!=t.length()){
            return false;
            }
        for(int i=0;i<s.length();i++){
            char cs=s[i];
            char ct=t[i];
            if(ms.find(cs)!=ms.end()){                
                if(ms[cs]!=ct){
                    return false;
                    }
                }
            else{
                if(mt.find(ct)!=mt.end())
                   {
                    return false;
                    }
     }
                   ms[cs]=ct;
                   mt[ct]=cs;
                   }
                   return true;
                   }
    
};