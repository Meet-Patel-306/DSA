// Last updated: 18/08/2025, 18:39:30
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0, maxlen = 0;

        for (int right = 0; right < s.length(); ++right) {
            while (seen.find(s[right]) != seen.end()) {
                seen.erase(s[left]);
                ++left;
            }
            seen.insert(s[right]);
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};