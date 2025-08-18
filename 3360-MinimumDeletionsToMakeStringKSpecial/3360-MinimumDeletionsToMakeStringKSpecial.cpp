// Last updated: 18/08/2025, 18:34:47
class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char, int> um;
        for (char c : word)
            um[c]++;
        vector<int> freq;
        for (auto pair : um)
            freq.push_back(pair.second);
        sort(freq.begin(), freq.end());
        int n = freq.size();
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            // big-small <=k
            // big = k+small
            // range = [small,big]==[small,small+k]
            int range = freq[i] + k;
            int tot_freq = freq[i];
            for (int j = i + 1; j < n; j++) {
                if (freq[j] > range) {
                    tot_freq += range;
                } else {
                    tot_freq += freq[j];
                }
            }
            int remain_freq = word.size() - tot_freq;
            ans = min(ans, remain_freq);
        }
        return ans;
    }
};
