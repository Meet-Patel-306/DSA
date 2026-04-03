// Last updated: 03/04/2026, 16:00:03
class Solution {
public:
    int smallestNumber(int n) {
        int x = n;
        while ((x & (x + 1)) != 0) {
            x++;
        }
        return x;
    }
};