// Last updated: 15/05/2026, 17:41:05
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        unordered_map<char,int> um;
        for(char c:moves)um[c]++;
        char move = 'R';
        if(um['L']>um['R']) move = 'L';
        int ans = 0;
        for(char c:moves){
            if(c == 'L') ans--;
            else if(c == 'R') ans++;
            else{
                if(move == 'L') ans--;
                else ans++;
            }
        }
        return abs(ans);
    }
};