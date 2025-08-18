// Last updated: 18/08/2025, 18:35:23
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        for(int i=0;i<n-1;i++){
            int a=0;
            for(int j=0;j<n-i-1;j++){
                if(heights[j]>heights[j+1]){
                    swap(heights[j], heights[j+1]);
                    swap(names[j],names[j+1]);
                    a=1;
                    }
                }
            if(a==0){
                break;
                }
            }
        reverse(names.begin(),names.end());
        return names;
    }
};