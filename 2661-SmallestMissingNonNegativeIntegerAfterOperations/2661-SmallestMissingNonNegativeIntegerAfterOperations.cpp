// Last updated: 03/04/2026, 16:01:32
class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n = nums.size(),x;
        map<int,int> rem;
        for(int i=0;i<n;i++){
            x = ((nums[i]%value)+value)%value;
            rem[x]++;
        }
        int ans = 0;
        while(true){
            int r = ans%value;
            if(rem[r]==0) return ans;
            rem[r]--;
            ans++;
        }
        // for(auto [f,s]:rem){
        //     cout<<f<<" "<<s<<endl;
        // }
        return ans;
    }
};