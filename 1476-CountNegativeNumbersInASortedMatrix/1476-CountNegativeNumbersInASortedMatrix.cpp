// Last updated: 18/08/2025, 18:36:29
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int c=0;
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]>=0){
                    break;
                    }
                c++;
                }
            }
        return c;
    }
};