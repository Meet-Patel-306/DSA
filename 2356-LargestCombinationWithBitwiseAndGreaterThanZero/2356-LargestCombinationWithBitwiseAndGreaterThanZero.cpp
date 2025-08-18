// Last updated: 18/08/2025, 18:35:32
class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int maxCount=0;
        for(int bit=0;bit<32;bit++){
            int c=0;
            for(int i: candidates){
                if(i&(1<<bit)){
                    c++;
                    }
                }
            maxCount=max(c,maxCount);
            }
        return maxCount;
    }
};