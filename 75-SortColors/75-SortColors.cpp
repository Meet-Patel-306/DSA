// Last updated: 18/08/2025, 18:38:42
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(int i:nums){
            if(i==0) z++;
            else if(i==1) o++;
            else t++;
        }
        int i = 0;
        while(z>0){
            nums[i] = 0;
            i++;
            z--;
        }
        while(o>0){
            nums[i] = 1;
            i++;
            o--;
        }
        while(t>0){
            nums[i] = 2;
            i++;
            t--;
        }
    }
};