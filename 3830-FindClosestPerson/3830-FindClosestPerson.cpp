// Last updated: 04/09/2025, 19:17:34
class Solution {
public:
    int findClosest(int x, int y, int z) {
        int i = abs(z-x);
        int j = abs(z-y);
        if(i<j) return 1;
        else if(i>j) return 2;
        else return 0;
    }
};