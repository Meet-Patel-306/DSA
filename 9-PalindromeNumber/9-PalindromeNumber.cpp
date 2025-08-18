// Last updated: 18/08/2025, 18:39:23
class Solution {
public:
    bool isPalindrome(int x) {
     
        string s=to_string(x);
        string c=to_string(x);
        reverse(s.begin(),s.end());
        cout<<s;
        if(s==c){
            return true;
            }
        else
            return false;
    }
};