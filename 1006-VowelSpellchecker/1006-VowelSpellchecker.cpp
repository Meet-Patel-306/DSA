// Last updated: 04/10/2025, 18:45:27
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper: lowercase a string
    string toLower(const string &s) {
        string res = s;
        transform(res.begin(), res.end(), res.begin(), ::tolower);
        return res;
    }

    // Helper: replace vowels with '*'
    string maskVowels(const string &s) {
        string res = toLower(s);
        for (char &c : res) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                c = '*';
        }
        return res;
    }

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact(wordlist.begin(), wordlist.end());
        unordered_map<string, string> caseInsensitive;
        unordered_map<string, string> vowelInsensitive;

        // preprocess wordlist
        for (string &w : wordlist) {
            string lower = toLower(w);
            string masked = maskVowels(w);

            if (!caseInsensitive.count(lower)) caseInsensitive[lower] = w;
            if (!vowelInsensitive.count(masked)) vowelInsensitive[masked] = w;
        }

        vector<string> ans;
        for (string &q : queries) {
            if (exact.count(q)) {
                ans.push_back(q); // exact match
            } else {
                string lower = toLower(q);
                string masked = maskVowels(q);

                if (caseInsensitive.count(lower)) {
                    ans.push_back(caseInsensitive[lower]); // case-insensitive match
                } else if (vowelInsensitive.count(masked)) {
                    ans.push_back(vowelInsensitive[masked]); // vowel error match
                } else {
                    ans.push_back(""); // no match
                }
            }
        }
        return ans;
    }
};
