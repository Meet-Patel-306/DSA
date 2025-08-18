// Last updated: 18/08/2025, 18:36:19
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        int count=0;
        vector<int> mod(k,0);
        for(int i:arr){
            int rem=(i%k+k)%k;
            mod[rem]++;
            }
        if(mod[0]%2!=0) return false;
        for(int i=1;i<=k/2;i++){
            if(mod[i]!=mod[k-i])
                return false;
            }
        return true;
        
    }
};