// Last updated: 29/08/2025, 18:19:48
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxa = 0;
        int maxd = 0;
        for(int i = 0;i<dimensions.size();i++){
            int diag = (dimensions[i][0]*dimensions[i][0])+(dimensions[i][1]*dimensions[i][1]);
            if(maxd<=diag){
                maxa = maxd == diag ? max(maxa,dimensions[i][0]*dimensions[i][1]) : dimensions[i][0]*dimensions[i][1];
                 maxd = diag;
            }
        }
        return maxa;
    }
};