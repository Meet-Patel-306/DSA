// Last updated: 18/08/2025, 18:37:23
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {

            return false;

        }

        return (s + s).find(goal) != string::npos;

    
    }
};