// Last updated: 18/08/2025, 18:39:24
class Solution {
public:
    int myAtoi(string s) {
       int i = 0, n = s.size();
        // Step 1: Skip leading whitespaces
        while(i < n && s[i] == ' ') i++;
        
        // Step 2: Check sign
        int sign = 1;
        if(i < n && (s[i] == '+' || s[i] == '-')) {
            if(s[i] == '-') sign = -1;
            i++;
        }

        // Step 3: Parse digits
        long res = 0;
        while(i < n && isdigit(s[i])) {
            res = res * 10 + (s[i] - '0');
            // Step 4: Clamp to INT range
            if(sign * res >= INT_MAX) return INT_MAX;
            if(sign * res <= INT_MIN) return INT_MIN;
            i++;
        }
        return sign*res;
    }
};