// Last updated: 18/08/2025, 18:38:29
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> um;
        int c;
        if(n%2==0){
            c=n/2;
            }
        else{
            c=(n+1)/2;
            }
        for(int i:nums){
            um[i]++;
            if(um[i]==c){
                return i;
                }
            }
        return 0;
    }
};