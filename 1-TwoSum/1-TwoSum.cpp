// Last updated: 18/08/2025, 18:39:32
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a[2];
        
        for(int i=0;i<nums.size()-1;i++){
            int sum=0;
            for(int j=i+1;j<nums.size();j++){
                sum=nums[i]+nums[j];
                if(sum==target){
                    return{i,j};

                    }
                }
            }
        //cout<<a[0]<<a[1];
                return {};
    }
};