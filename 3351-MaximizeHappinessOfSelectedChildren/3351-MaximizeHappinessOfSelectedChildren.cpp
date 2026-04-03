// Last updated: 03/04/2026, 16:00:50
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),[](auto &a,auto &b){
            return a>b;
        });
        long long ans = 0;
        long long decr = 0;
        for(int i :happiness){
            if(k<=0) break;
            if((long long)(i-decr)<0) continue;
            else{
                // cout<<ans<<" "<<i<<" "<<decr<<endl;
                ans+= (long long)(i-decr);
                decr++;
            }
            k--;
        }
        return ans;
    }
};