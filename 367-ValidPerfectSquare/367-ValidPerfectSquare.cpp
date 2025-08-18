// Last updated: 18/08/2025, 18:38:00
class Solution {
public:
    bool isPerfectSquare(int num) {
        int a=sqrt(num);
        //cout<<a;
        if(a*a==num)
            return true;
        else
            return false;
    }
};