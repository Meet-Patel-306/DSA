// Last updated: 03/04/2026, 16:01:39
class Solution {
public:
    int bestClosingTime(string customers) {
        int besttime = 0;
        int prefix = 0;
        int minpenalty = 0;
        for(int i = 0;i<customers.length();i++){
            prefix += customers[i] == 'Y' ? -1 : 1;
            if(prefix < minpenalty){
                besttime = i+1;
                minpenalty = prefix;
            }
        }
        return besttime;
    }
};