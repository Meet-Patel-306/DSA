// Last updated: 18/08/2025, 18:37:58
class Solution {
public:
    void dfs(int currNum,int n,vector<int>& ans){
        if(currNum>n) return;
        ans.push_back(currNum);
        // for 1,10,100,1000, ......, 11,111,1111......
        for(int i = 0;i<10;i++){
            if((currNum*10+i)>n) return;
            dfs(currNum*10+i,n,ans);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        // for 1xyz,2xyz,3xyz .....,9xyz
        for(int i = 1 ;i<10;i++){
            dfs(i,n,ans);
        }
        return ans;
    }
};