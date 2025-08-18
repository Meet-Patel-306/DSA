// Last updated: 18/08/2025, 18:36:13
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int repeat=((i+1)*(n-i)+1)/2;
            ans+=repeat*arr[i];
            }
        return ans;
    }
};