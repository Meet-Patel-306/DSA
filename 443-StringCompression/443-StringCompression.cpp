// Last updated: 18/08/2025, 18:37:50
class Solution {
public:
    int compress(vector<char>& chars) {
        string s(chars.begin(),chars.end());
        int n=s.length();
        int i=0;
        int writeI=0;
        if(n==0)
            return 0;
        while(i<n){
            char c=s[i];
            int count=0;
            while(s[i]==c&&i<n){
                i++;
                count++;
                }
            chars[writeI++]=c;
            if(count>1){
                string a=to_string(count);
                for(char ch:a){
                    chars[writeI++]=ch;
                    }
                }
            }
        return writeI;
    }
};