// Last updated: 04/10/2025, 18:42:45
class Solution {
public:
    bool doesAliceWin(string s) {
        for (char c : s) {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                return true;
        }
        return false;
    }
};