// Last updated: 18/08/2025, 18:36:12
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long sum=0;
        for(int i:nums){
            sum+=i;
            }
        int rem=sum%p;
        if(sum%p==0) return 0;
        unordered_map<int,int> prefixMod;
        prefixMod[0]=-1;
        long pSum=0;
        int l=nums.size();
        for(int i=0;i<nums.size();i++){
            pSum+=nums[i];
            int cMod=pSum%p;
            int target=(cMod-rem+p)%p;
            if(prefixMod.find(target)!=prefixMod.end()){
                l=min(l,i-prefixMod[target]);
                }
            prefixMod[cMod]=i;
            }
        return l==nums.size()?-1:l;
        
    }
};