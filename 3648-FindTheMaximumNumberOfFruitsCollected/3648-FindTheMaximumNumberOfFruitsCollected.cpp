// Last updated: 18/08/2025, 18:34:29
class Solution {
public:
    int path(int i,int j,int n,vector<vector<int>>& db,vector<vector<int>>& fruits){
        if(i>=n || j>=n || i<0 || j<0) return 0;
        if(db[i][j]!=-1) return db[i][j];
        int val = fruits[i][j];
        int res = 0;
        if(i==j){
            res = max(res,path(i+1,j+1,n,db,fruits));
        }
        else if(i==j-1){
            res = max({res,path(i+1,j+1,n,db,fruits),path(i+1,j,n,db,fruits)});
        }
        else{
            res = max({res,path(i+1,j+1,n,db,fruits),path(i+1,j-1,n,db,fruits),path(i+1,j,n,db,fruits)});
        }
        db[i][j] = val+res;
        return db[i][j];
    }
    int path2(int i,int j,int n,vector<vector<int>>& db,vector<vector<int>>& fruits){
        if(i>=n || j>=n || i<0 || j<0) return 0;
        if(db[i][j]!=-1) return db[i][j];
        int val = fruits[i][j];
        int res = 0;
        if(i==j){
            res = max(res,path2(i+1,j+1,n,db,fruits));
        }else if(i-1==j){
            res = max({res,path2(i+1,j+1,n,db,fruits),path2(i,j+1,n,db,fruits)});
        }
        else{
            res = max({res,path2(i+1,j+1,n,db,fruits),path2(i-1,j+1,n,db,fruits),path2(i,j+1,n,db,fruits)});
        }
        db[i][j] = val+res;
        return db[i][j];
    }
    int maxCollectedFruits(vector<vector<int>>& fruits) {
        int n = fruits.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += fruits[i][i];
            fruits[i][i] = 0;
        }
        int j = n - 1;
        // ans+=fruits[][j];
        // for(int i = 1;i<n;i++){
        //     if()
        // }
        vector<vector<int>> db(n,vector<int>(n,-1));
        vector<vector<int>> db2(n,vector<int>(n,-1));
        ans += path(0, j, n,db,fruits);
        ans += path2(n - 1,0, n,db2,fruits);
        return ans;
    }
};