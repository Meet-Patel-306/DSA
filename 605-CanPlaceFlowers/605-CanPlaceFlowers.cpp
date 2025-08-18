// Last updated: 18/08/2025, 18:37:37
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m=flowerbed.size();
        if(n==0)
            return true;
        for(int i=0;i<m;i++){
            if(flowerbed[i]==0&&(i==0||flowerbed[i-1]==0)&&(i==m-1||flowerbed[i+1]==0)){
                flowerbed[i]=1;
                n--;
                if(n==0)
                    return true;
                }
            }
        return false;
    }
};