// Last updated: 18/08/2025, 18:34:31
class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> ans;
        vector<int> b;
        for(int i=1;i<height.size();i++){
            if(height[i-1]>threshold ){
                ans.push_back(i);
                }
            //if(ans.size()==2) break;
            }
        //if(ans.size()!=2) return b;
        return ans;
    }
};