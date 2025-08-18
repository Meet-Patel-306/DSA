// Last updated: 18/08/2025, 18:37:34
class Solution {
public:
    bool judgeSquareSum(int c) {
        long a=0;
        if(c==INT_MAX||c==INT_MIN){
            return false;
            }
        long b=(long)sqrt(c);
        while(a<=b){
            if(a*a+b*b==c){
                return true;
                }
            if(a*a+b*b<c){
                a++;
                }
            else{
                b--;
                }
            }
        return false;
    }
};