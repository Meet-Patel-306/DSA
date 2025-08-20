// Last updated: 20/08/2025, 19:25:16
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for(int i = 1;i<prices.size()-1;i++){
            if(buy>prices[i]){
                buy = prices[i];
                continue;
            }
            cout<<buy<<endl;
            if(prices[i]>prices[i+1]){
                profit += prices[i]-buy;
                cout<<prices[i]<<" "<<buy<<endl;
                buy = prices[i+1];
            }
        }
        if(buy!=INT_MAX && prices[prices.size()-1]>buy){
            profit += prices[prices.size()-1]-buy;
        }
        return profit;
    }
};