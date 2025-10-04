// Last updated: 04/10/2025, 18:45:08
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int ans = 0;
        vector<string> v;
        stringstream ss(text);
        string t;
        while(getline(ss,t,' ')){
            v.push_back(t);
        }
        for(string i : v){
            bool flag = true;
            for(char c:i){
                if(brokenLetters.find(c)!=string::npos){ 
                    flag = false;
                    break;
                    }
            }
            if(flag) ans++;
        }
        return ans;
    }
};