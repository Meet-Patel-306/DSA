// Last updated: 18/08/2025, 18:38:43
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> r;
        vector<int> c;
        for(int i = 0 ;i<matrix.size();i++){
            for(int j =0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    if(find(r.begin(),r.end(),i)==r.end()) r.push_back(i);
                    if(find(c.begin(),c.end(),j)==c.end()) c.push_back(j);
                }
            }
        }
        for(int i : r){
             for(int j =0;j<matrix[0].size();j++){
                matrix[i][j] = 0;
            }
        }
        for(int i = 0 ;i<matrix.size();i++){
            for(int j : c){
                matrix[i][j] = 0;
            }
        }
    }
};