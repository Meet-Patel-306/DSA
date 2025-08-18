// Last updated: 18/08/2025, 18:35:51
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
       vector<vector<int>> ans;
        int k=0;
        int size=original.size();
        if(n*m!=size){
            return ans;
            }
      for(int i=0;i<m;i++){
          vector<int> a;
          for(int j=0;j<n;j++){
              a.push_back(original[k]);
              k++;
              }
          ans.push_back(a);
          }
        return ans;
        
    }
};