// Last updated: 18/08/2025, 18:37:44
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int> um;
        int n=score.size();
        vector<int> a;
        for(int i=0;i<n;i++){
            a.push_back(score[i]);
            }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        int c=1;
        for(int i:a){
            um[i]=c;
            c++;
            }
        vector<string> ans;
        for(int i: score){
            if(um[i]==1){
                ans.push_back("Gold Medal");}
            else if(um[i]==2){
                ans.push_back("Silver Medal");}
            else if(um[i]==3){

                ans.push_back("Bronze Medal");}
                    else{
                        ans.push_back(to_string(um[i]));
                        }
                }
        return ans;
    }
};