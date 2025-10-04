// Last updated: 04/10/2025, 18:44:55
class Solution {
public:
    bool isZero(int n){
        while(n){
            if(n%10 == 0) return true;
            n/=10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        int a = 1;
        int b = n-1;
        while(isZero(a) || isZero(b)){
            a++;
            b--;
        }
        return {a,b};
    }
};