// Last updated: 15/05/2026, 17:43:45
class Solution {
public:
    int numSub(string s) {
        int cnt = 0, total = 0, mod = 1e9 + 7;
        for (char a : s) {
            if (a == '1') {
                cnt++;
            } else {
                cnt = 0;
            }
            total = (total + cnt) % mod;
        }
        return total;
    }
};