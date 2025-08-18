// Last updated: 18/08/2025, 18:39:18
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        // for (int i = 0; i < nums.size() - 2; i++) {
        //     for (int j = i + 1; j < nums.size() - 1; j++) {      
        //         for (int k = i + 2; k < nums.size(); k++) {
        //             vector<int> temp;
        //             if ((nums[k] + nums[i] + nums[j]) == 0 &&
        //                 (i!=j && i!=k && j!=k)) {
        //                 temp.push_back(nums[i]);
        //                 temp.push_back(nums[j]);
        //                 temp.push_back(nums[k]);
        //                 sort(temp.begin(),temp.end());
        //                 if(find(ans.begin(),ans.end(),temp)==ans.end()){
        //                     ans.push_back(temp);
        //                     break;
        //                 }
        //             }
        //         }
        //     }
        // }
        // return ans;
        for(int i=0;i<nums.size()-2;i++){
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    // sort(temp.begin(),temp.end());
                    // if(find(ans.begin(),ans.end(),temp)==ans.end()){
                    ans.push_back(temp);
                    // }
                    j++;
                    k--;
                    // break;
                    while (j < k && nums[j] == nums[j - 1])
                        ++j;
                    while (j < k && nums[k] == nums[k + 1])
                        --k;
                }
            }
           
        }
        return ans;
    }
};