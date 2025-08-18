// Last updated: 18/08/2025, 18:34:52
class Solution {
public:
    long long flowerGame(int n, int m) {
        long long c=0;
        for(int i=1;i<=n;i++){
            if(i%2==1){
                c+=m/2;
               }
            else{
                c+=(m+1)/2;
                }
            }
        return c;
                    
    }
};