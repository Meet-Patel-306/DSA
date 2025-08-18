// Last updated: 18/08/2025, 18:35:43
class Solution {
public:
    void ansCount(const vector<int> nums,int index,int maxOR, int currentOR,int &count){
        if(currentOR==maxOR){
            count++;
            }
        for(int i=index;i<nums.size();i++){
            ansCount(nums,i+1,maxOR,currentOR|nums[i],count);
            }
        }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOR=0;
        for(int i:nums){
            maxOR|=i;
            }
        int count = 0;
        ansCount(nums,0,maxOR,0,count);
        return count;
    }
};