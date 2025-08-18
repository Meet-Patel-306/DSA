// Last updated: 18/08/2025, 18:36:26
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> a(n);
        int max=*max_element(candies.begin(),candies.end());
        for(int i=0;i<n;i++){
            if((candies[i]+extraCandies)>=max){
                a[i]=true;
                }
            else 
                a[i]=false;
               
            }
        return a;
    }
};