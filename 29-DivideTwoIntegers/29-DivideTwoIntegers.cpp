// Last updated: 18/08/2025, 18:39:06
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
            }
        auto ans=dividend/divisor;
        return ans;
    }
};