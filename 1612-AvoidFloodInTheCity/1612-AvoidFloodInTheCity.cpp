// Last updated: 15/05/2026, 17:43:51
class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n, 1);
        unordered_map<int, int> full;
        set<int> dryDays;

        for (int i = 0; i < n; i++) {
            if (rains[i] == 0) {
                dryDays.insert(i);
                ans[i] = 1; // default value, in case we don't use it
            } else {
                int lake = rains[i];
                ans[i] = -1;

                if (full.count(lake)) {
                    // lake is already full -> must dry it before today
                    auto it = dryDays.lower_bound(full[lake]);
                    if (it == dryDays.end()) return {};
                    ans[*it] = lake; // dry this lake on that day
                    dryDays.erase(it);
                }

                full[lake] = i; // mark as full on this day
            }
        }

        return ans;
    }
};
