// Last updated: 04/10/2025, 18:43:59
class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<long long> db(n+1,0);
        long long share = 0;
        long long MOD = 1000000007;
        db[1] = 1; 
        for(int i = 2;i<=n;i++){
            if(i-delay>0){
                share = (share+db[i-delay]+MOD)%MOD;
            }
            if(i-forget>0){
                share = (share-db[i-forget]+MOD)%MOD;
            }
            db[i] = share;
        }
        long long ans = 0;
        for(int i = n-forget+1;i<=n;i++){
            ans = (ans+db[i])%MOD;
        }
        return (int)ans;
    }
};