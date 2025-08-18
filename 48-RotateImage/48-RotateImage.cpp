// Last updated: 18/08/2025, 18:38:54
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // flip matrix
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n/2;j++){
                int temp = matrix[j][i];
                matrix[j][i]=matrix[n-j-1][i];
                matrix[n-j-1][i]=temp;
            }
        }
        // T matrix
        for(int i = 0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
};