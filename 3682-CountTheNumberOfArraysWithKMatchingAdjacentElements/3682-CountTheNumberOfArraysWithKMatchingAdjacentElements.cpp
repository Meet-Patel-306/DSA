// Last updated: 18/08/2025, 18:34:28
class Solution {
    int MOD = 1e9+7;
public:
    long long powerMOD(int base, int pw) {
        if(pw == 0)
            return 1;
        
        long long tmp = powerMOD(base, pw >> 1) % MOD;

        if(pw & 1) return (base * ((tmp * tmp) % MOD)) % MOD;
        return (tmp * tmp) % MOD;
    }
    long long modInverse(long long x) {
        return powerMOD(x, MOD - 2);
    }
    long long nCr(int n,int r,vector<long long>& factorial){
         return (factorial[n] * modInverse(factorial[r]) % MOD * modInverse(factorial[n - r]) % MOD) % MOD;
    }
    int countGoodArrays(int n, int m, int k) {
        vector<long long> factorial(n+1,1);
        for(long long i = 2;i<=n;i++){
            factorial[i]=(factorial[i-1]*i)%MOD;
        }
        long long res = nCr(n - 1, k, factorial) * m % MOD * powerMOD(m - 1, n - k - 1) % MOD;
        return res;
    }
};