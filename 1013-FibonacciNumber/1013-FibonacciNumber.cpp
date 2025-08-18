// Last updated: 18/08/2025, 18:37:03
class Solution {
public:
    
    int fib(int n) {
        int a = 0;
        int b = 1;
        int i = 0;
        int sum = 0;
        int c = a+b;
        if(n==1){
            return 1;
            }
        if(n<=0)
            return 0;
        while(i<n){
            if(i == n-2){
                sum+=b+a;
                break;
                }
            a=b;
            b=c;
            c=a+b;
            i++;
            }
        return sum;
    }
};