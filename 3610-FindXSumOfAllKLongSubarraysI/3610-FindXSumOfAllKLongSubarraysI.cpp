// Last updated: 03/04/2026, 16:00:19
class Solution {
public:
    int xSum(vector<int>& nums,int x,int k){
        unordered_map<int,int> um;
        for(int i : nums){
            um[i]++;
        }
        int sum = 0;
        if(x == k){
            for(int i : nums){
                sum+=i;
            }
            return sum;
        }
        unordered_map<int,int> um_f;
        for(int i = 0;i<x;i++){
            int max = INT_MIN,max_num = 0;
            for(auto [f,s]: um){
                if(s>max){
                    max = s;
                    max_num = f;
                }else if(s == max){
                    if(f>max_num){
                        max_num = f;
                    }
                }
            }
            um[max_num] = -1;
            if(max == -1) break;
            um_f[max_num] = max;
            // cout<<max_num<<" "<<max<<endl;
            // for(auto [f,s]: um){
            //     cout<<" --- "<<f<<" "<<s<<endl;
            // }
        }
        int ans = 0;
        for(auto [f,s]: um_f){
            ans += f*s;
        }
        // cout<<max1<<" "<<max_num1<<" "<<max2<<" "<<max_num2<<endl;
        return ans;
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0;i<n-k+1;i++){
            vector<int> sub(nums.begin()+i,nums.begin()+i+k);
            int x_sum = xSum(sub,x,k);
            ans.push_back(x_sum);
        }
        return ans;
    }
};