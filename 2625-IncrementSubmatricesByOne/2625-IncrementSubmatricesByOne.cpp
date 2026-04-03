// Last updated: 03/04/2026, 16:01:34
class Solution {
public:
    void addNum(vector<vector<int>>& mat,int n,int r1,int r2,int c1,int c2){
        // for(int i = r1;i<=r2;i++){
            
        // }
        for(int i = r1;i<=r2;i++){
            for(int j = c1;j<=c2;j++){
                mat[i][j]+=1;
            }
        }
    }
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> mat(n,vector<int>(n,0));
        for(auto i: queries){
            addNum(mat,n,i[0],i[2],i[1],i[3]);
        }
        return mat;
    }
};