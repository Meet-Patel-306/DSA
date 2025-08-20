// Last updated: 20/08/2025, 19:25:48
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int ub = 0, lb = n - 1, lefb = 0, rigb = m - 1;

        while (ub <= lb && lefb <= rigb) {
            // Traverse top row
            for (int i = lefb; i <= rigb; i++)
                ans.push_back(matrix[ub][i]);
            ub++;
            
            // Traverse right column
            for (int i = ub; i <= lb; i++)
                ans.push_back(matrix[i][rigb]);
            rigb--;

            // Traverse bottom row
            if (ub <= lb) {
                for (int i = rigb; i >= lefb; i--)
                    ans.push_back(matrix[lb][i]);
                lb--;
            }

            // Traverse left column
            if (lefb <= rigb) {
                for (int i = lb; i >= ub; i--)
                    ans.push_back(matrix[i][lefb]);
                lefb++;
            }
        }
        return ans;
    }
};
