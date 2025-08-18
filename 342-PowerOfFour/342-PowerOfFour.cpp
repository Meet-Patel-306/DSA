// Last updated: 18/08/2025, 18:38:04
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        while(n%4==0){
            n/=4;
        }
        return n==1;
    }
};