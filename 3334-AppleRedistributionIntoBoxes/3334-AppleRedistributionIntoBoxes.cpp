// Last updated: 03/04/2026, 16:00:54
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),[](auto &a,auto &b){
            return a>b;
        });
        int sum = 0;
        for(int i:apple) sum+=i;
        int ans = 0;
        for(int i : capacity){
            // cout<<sum<<" "<<ans<<endl;
            if(sum>0){
                sum-=i;
                ans++;
            }
            else{
                break;
            }
        }
        return ans;
    }
};