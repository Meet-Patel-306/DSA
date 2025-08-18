// Last updated: 18/08/2025, 18:37:27
class Solution {
public:
    bool breaktrackingAndDfs(vector<double>& nums){
        if(nums.size() == 1){
            return fabs(nums[0]-24.0)<1e-6;
        }
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                if( i==j ) continue;
                vector<double> next;
                for(int k = 0;k<nums.size();k++){
                    if(k!=i && k!=j ) next.push_back(nums[k]);
                }
                double a = nums[i],b = nums[j];
                vector<double> result = {a+b,a-b,b-a,a*b};
                if(fabs(a)>1e-6) result.push_back(b/a);
                if(fabs(b)>1e-6) result.push_back(a/b);
                for(double val : result){
                    next.push_back(val);
                    if( breaktrackingAndDfs(next)) return true;
                    next.pop_back();
                } 
            }
        }
        return false;
    }
    bool judgePoint24(vector<int>& cards) {
        vector<double> nums(cards.begin(),cards.end());
        return  breaktrackingAndDfs(nums);
    }
};