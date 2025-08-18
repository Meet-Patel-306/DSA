// Last updated: 18/08/2025, 18:37:52
class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0;
        int n = s.length();
        int maxlen = INT_MIN;
        unordered_map<char, int> um;
        // for(r=0;r<n;r++){
        //     um[s[r]]++;
        //     int maxp = INT_MIN;
        //     for(auto [c,cnt]: um){
        //         maxp = max(maxp,cnt);
        //         // cout<<c<<" "<<cnt<<" - "<<r<<" "<<l<<endl;
        //     }
        //     // cout<<"ok "<<r<<" - "<<l<<" -- "<<r-l+1<<" "<<maxp<<" =
        //     "<<maxlen<<endl; while((maxp+k)<(r-l+1)){
        //         um[s[l]]--;
        //         // cout<<"hee"<<endl;
        //         l++;
        //     }
        //     maxlen = max(maxlen,r-l+1);
        // }

        // m-2
        int maxf = 0;
        while (r < n) {
            um[s[r]]++;
            maxf = max(maxf, um[s[r]]);
            if ((r - l + 1) - maxf > k) {
                um[s[l]]--;
                l++;
            }
                maxlen = max(maxlen, r - l + 1);
                r++;
        }
        return maxlen;
    }
};