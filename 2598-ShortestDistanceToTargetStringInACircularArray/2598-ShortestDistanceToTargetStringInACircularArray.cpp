// Last updated: 15/05/2026, 17:41:28
class Solution {
public:
    int closestTarget(vector<string>& words, string target, int start) {
        int n = words.size();
        for (int i = 0; i <= n >> 1; i++)
            if (words[(start + i) % n] == target |
                words[(start - i + n) % n] == target)
                return i;
                
        return -1;
    }
};