// Last updated: 15/05/2026, 17:46:12
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        const int n=bits.size();
        int i=0;
        for(; i<n-1; i++){
            if(bits[i]==1) i++;
        }
        return i==n-1;
    }
};