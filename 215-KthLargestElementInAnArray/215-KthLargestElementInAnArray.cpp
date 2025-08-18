// Last updated: 18/08/2025, 18:38:21
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i:nums){
            pq.push(i);
            }
        for(int i=0;i<k-1;i++){
            pq.pop();
            }
        return pq.top();
    }
};