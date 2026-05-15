// Last updated: 15/05/2026, 17:42:01
class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n = encodedText.size();
        int col = n/rows;
        int j = 0,k = 0;
        string text = "";
        vector<vector<char>> mat(rows,vector<char>(col));
        for(int i = 0;i<rows;i++){
            for(int j = 0;j<col;j++){
                mat[i][j] = encodedText[k];
                k++;
            }
        }
        for(int start = 0;start<col;start++){
            int i = 0,j = start;
            while(i<rows && j<col){
                text+= mat[i][j];
                i++;
                j++;
            }
        }
        while(!text.empty() && text.back() == ' '){
            text.pop_back();
        }
        return text;
    }
};