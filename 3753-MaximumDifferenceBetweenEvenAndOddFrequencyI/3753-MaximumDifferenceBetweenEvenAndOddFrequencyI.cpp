// Last updated: 18/08/2025, 18:34:19
class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> umap;
        for(char c:s){
            umap[c]++;
        }
        int maxe=INT_MIN;
        int mine=INT_MAX;
        int maxo=INT_MIN;
        int mino=INT_MAX;
        for(auto um:umap){
            if(um.second%2==0){
                if(um.second<mine){
                    mine=um.second;
                }
                if(um.second>maxe){
                    maxe=um.second;
                }
            }else{
                if(um.second<mino){
                    mino=um.second;
                }
                if(um.second>maxo){
                    maxo=um.second;
                }
            }
        }
        //return max(maxe-mino,maxo-maxe);
        return maxo-mine;
    }
};