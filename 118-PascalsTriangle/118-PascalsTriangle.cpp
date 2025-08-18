// Last updated: 18/08/2025, 18:38:38
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans = {{1}};
        //ans.push_back({{1}});
        if(numRows==1) return ans;
        ans.push_back({{1,1}});
        int i=2;
        while(i<numRows){
            vector<int> temp(i+1,1);
                for(int j=1;j<i;j++){
                    temp[j]=ans[i-1][j-1]+ans[i-1][j];
                }
            ans.push_back(temp);
            i++;
        }
        return ans;
    }
};