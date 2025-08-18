// Last updated: 18/08/2025, 18:34:24
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int m=baskets.size();
        int a=sqrt(m);
        vector<int> semg_mx;
        int c=0,mx=0;
        for(int i=0;i<m;i++){
            if(c==a){
                semg_mx.push_back(mx);
                mx=baskets[i];
                c=1;
                continue;
            }
            mx=max(mx,baskets[i]);
            c++;
        }
        semg_mx.push_back(mx);
        int ans=0;
        for(int i=0;i<n;i++){
            int k=0,set=1;
            for(int j=0;j<m;j+=a){
                if(semg_mx[k]<fruits[i]){
                    k++;
                    continue;
                }
                for(int x=j;x<min(j+a,m);x++){
                    if(baskets[x]>=fruits[i]){
                        set = 0;
                        baskets[x]=0;
                        break;
                    }
                }
                if(set==0){
                    semg_mx[k]=0;
                    for(int x=j;x<min(j+a,m);x++){
                        semg_mx[k] = max(baskets[x],semg_mx[k]);
                    }
                    break;
                }
            }
            ans+=set;
        }
        return ans;
    }
};