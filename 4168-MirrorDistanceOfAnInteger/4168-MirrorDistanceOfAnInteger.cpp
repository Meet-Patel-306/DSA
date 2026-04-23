// Last updated: 23/04/2026, 15:41:33
class Solution {
public:
    int mirrorDistance(int n) {
        string a = to_string(n);
        reverse(a.begin(),a.end());
        int b = stoi(a);
        return abs(n-b);
    }
};