// Last updated: 04/10/2025, 18:42:58
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = 0;
        while(numExchange <= numBottles){
            if(numBottles >= numExchange){
                ans += numExchange;
                numBottles = numBottles - numExchange + 1;
                numExchange++;
            }
        }
        // cout<<numExchange<<" "<<numBottles;
        ans += numBottles;
        return ans;
    }
};