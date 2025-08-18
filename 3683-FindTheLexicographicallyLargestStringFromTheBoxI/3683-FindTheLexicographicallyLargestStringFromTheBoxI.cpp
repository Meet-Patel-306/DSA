// Last updated: 18/08/2025, 18:34:27
class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends == 1){
            return word;
        }
        int n = word.size();
        string ans = "";
        for(int i = 0; i< n; i++){
            string t = word.substr(i,min(n-i,n-numFriends+1));
            if(ans<t){
                ans = t;
            }
        }
        return ans;
    }
};