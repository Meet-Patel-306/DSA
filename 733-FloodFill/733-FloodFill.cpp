// Last updated: 15/05/2026, 17:46:10
class Solution {
public:
    void dfs(vector<vector<int>>& image,int i,int j,int n,int m,int color,int oldcolor){
        if(i<0 || i>=n || j<0 || j>=m || image[i][j] != oldcolor || image[i][j] == color) return;
        // cout<<i<<" "<<j<<endl;
        image[i][j] = color;
        dfs(image,i+1,j,n,m,color,oldcolor);
        dfs(image,i-1,j,n,m,color,oldcolor);
        dfs(image,i,j+1,n,m,color,oldcolor);
        dfs(image,i,j-1,n,m,color,oldcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        dfs(image,sr,sc,n,m,color,oldcolor);
        return image;
    }
};