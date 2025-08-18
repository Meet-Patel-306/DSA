// Last updated: 18/08/2025, 18:39:19
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int prelen = 0;
        if(strs.size() <=1){
            return strs[0];
        }
        for(int i = 0;i<strs[0].size();i++){
            int flag = 1;
            string temp = "";
            temp += strs[0][prelen];
            for(int j = 1;j<strs.size();j++){
                if(prelen >= strs[j].length() || temp.find(strs[j][prelen]) == string::npos  ){
                    flag = 0;
                    // cout<<prelen<<"--"<<strs[j].length()<<endl;
                    // "=="<<temp.find(strs[j][prelen])<<endl;
                    break;
                }
            }
            if(!flag){
                // cout<<temp<<"--"<<prelen;
                break;
            }
            ans+=temp;
            prelen++;
            // cout<<ans<<endl;
        }
        // cout<<ans;
        return ans;
    }
};