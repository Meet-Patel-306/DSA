// Last updated: 15/05/2026, 17:46:47
class Solution {
public:
    int solve(vector<vector<long>>& dp,vector<int>& coins,int target,int i){
        if(target == 0) return 1;
        if(i == 0) return (target%coins[i]) == 0;
        if(dp[i][target] != -1 ) return dp[i][target];
        int notpick = solve(dp,coins,target,i-1);
        int pick = 0;
        if(coins[i] <= target){
            pick = solve(dp,coins,target-coins[i],i);
        }
        return dp[i][target] = pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<long>> dp(n,vector<long>(amount+1,-1));
        return solve(dp,coins,amount,n-1);
    }
};