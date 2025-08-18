// Last updated: 18/08/2025, 18:35:55
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(int i:piles){
            pq.push(i);
            }
        for(int i=0;i<k;i++){
            float a=pq.top();
            float b=floor((a/2));
            float ans= a-b;
            pq.pop();
            pq.push(int(ans));
            }
        int sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
            }
        return sum;
    }
};