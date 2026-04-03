// Last updated: 03/04/2026, 16:01:52
class Solution {
public:
    int binarySearch(vector<int>& potions,long long num,int n){
        int left = 0,right = n-1,ans = n;
        while(left<=right){
            int mid = (left+right)/2;
            if(num <= potions[mid]){
                ans = mid;
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return ans == n ? -1:ans;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = potions.size();
        int m = spells.size();
        sort(potions.begin(),potions.end());
        vector<int> ans;
        for(int i:spells){
            long long num = success%i == 0 ? success/i : (success/i)+1;
            // long long num = success/i;
            
            // method 1


            int index = binarySearch(potions,num,n);

            // method 2


            // int index = lower_bound(potions.begin(), potions.end(), num)-potions.begin();
            // cout<<index<<" - "<<n<<endl;
            if(index == -1) ans.push_back(0);
            else ans.push_back(n-index);
        }
        return ans;
    }
};