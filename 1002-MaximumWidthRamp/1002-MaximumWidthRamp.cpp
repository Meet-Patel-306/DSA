// Last updated: 18/08/2025, 18:37:05
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(st.empty()||nums[st.top()]>nums[i]){
                st.push(i);
                }
            }
        int ans=0;
        for(int j=n-1;j>=0;j--){

            while(!st.empty()&&nums[st.top()]<=nums[j]){
                ans=max(ans,j-st.top());
                //cout<<j-st.top()<<endl;
                st.pop();
                }
            }
        return ans;
    }
};