// Last updated: 18/08/2025, 18:37:48
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max=-1;
        int i=0,j=0;
        int n=nums.size();
        //if(n==1) return nums[0];
        while(i<n && j<n){
            if(nums[i]==nums[j] && nums[j]==1){
                count++;
              //cout<<count<<endl;
                }
            else{
                j=i;
                //cout<<j<<"-"<<i<<endl ;
                if(count>max) max=count;
                count=0;
                if(nums[i]==nums[j]&& nums[j]==1) count++;
                }
            i++;
           //cout<<i;
            }
        //cout<<i;
        if(max<count) max=count;
        return max;
    }
};