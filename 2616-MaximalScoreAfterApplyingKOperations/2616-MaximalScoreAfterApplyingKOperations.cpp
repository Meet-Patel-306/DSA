// Last updated: 18/08/2025, 18:35:10
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i:nums)
            pq.push(i);
        long long score=0;
        for(int i=0;i<k;i++){
            double a=pq.top();
            score+=a;
            //cout<<a<<endl;
            pq.pop();
            a=ceil(a/3);
            //cout<<a<<"------"<<endl;
            pq.push(a);
            }
        return score;
    }
};