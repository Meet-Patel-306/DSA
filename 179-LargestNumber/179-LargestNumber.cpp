// Last updated: 18/08/2025, 18:38:28
    bool comp(int a,int b){

        string sa=to_string(a);

        string sb=to_string(b);

        return (sa+sb)>(sb+sa);

        }
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),comp);
        /*for(int i:nums){
            cout<<i<<endl;
            }*/
        if(to_string(nums[0])=="0") return "0";
        string ans="";
        for(int i:nums){
            ans+=to_string(i);
            }
        return ans;
            
    }
};