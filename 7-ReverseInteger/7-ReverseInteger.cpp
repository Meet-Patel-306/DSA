// Last updated: 18/08/2025, 18:39:26
class Solution {
public:
    int reverse(int x) {
        int a=0,b=x;
        while(x!=0){
            int rev=x%10;
            x/=10;
            if(a>INT_MAX/10 || (a==INT_MAX && rev==7))
               return 0;
            if(a<INT_MIN/10||(a==INT_MIN&&rev==-8))
                return 0;
            a=a*10+rev;
            }
            return a;
    }
};