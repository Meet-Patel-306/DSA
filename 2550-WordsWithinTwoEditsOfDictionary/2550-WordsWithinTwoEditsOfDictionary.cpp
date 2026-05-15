// Last updated: 15/05/2026, 17:41:35
class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int n = queries.size();
        int m = dictionary.size();
        vector<string> ans;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(queries[i] == dictionary[j]){
                    ans.push_back(queries[i]);
                    break;
                }
                int cnt = 2;
                int k = 0;
                string temp = queries[i];
                while(cnt && temp!=dictionary[j] && k<temp.size()){
                    if(temp[k] == dictionary[j][k]) k++;
                    else{
                        temp[k] = dictionary[j][k];
                        cnt--;
                        k++;
                    }
                }
                if(temp == dictionary[j]){
                    ans.push_back(queries[i]);
                    break;
                }
            }
        }
        return ans;
    }
};