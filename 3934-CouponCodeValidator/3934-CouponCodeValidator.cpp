// Last updated: 03/04/2026, 15:59:15
class Solution {
public:
    bool vaildCode(string& str) {
        const regex pattern("^[a-zA-Z0-9_]+$");
        return regex_match(str, pattern);
    }
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {
        int n = code.size();
        vector<pair<string, string>> v;
        for (int i = 0; i < n; i++) {
            if (isActive[i]) {
                if (businessLine[i] == "electronics" ||
                    businessLine[i] == "grocery" ||
                    businessLine[i] == "pharmacy" ||
                    businessLine[i] == "restaurant") {
                    if (code[i].size() > 0) {
                        if (vaildCode(code[i])) {
                            v.push_back({code[i], businessLine[i]});
                        }
                    }
                }
            }
        }
        unordered_map<string, int> priority = {{"electronics", 0},
                                               {"grocery", 1},
                                               {"pharmacy", 2},
                                               {"restaurant", 3}};

        sort(v.begin(), v.end(),
             [&](const pair<string, string>& a, const pair<string, string>& b) {
                 if (priority[a.second] != priority[b.second])
                     return priority[a.second] < priority[b.second];
                 return a.first < b.first; // name sort
             });
        vector<string> ans;
        for (auto i : v) {
            ans.push_back(i.first);
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }
};