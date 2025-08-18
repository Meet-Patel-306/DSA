// Last updated: 18/08/2025, 18:36:09
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int c=0;
            for(int i=0;i<words.size();i++){
                for(int j=0;j<words [i].length();j++){
                    if(allowed.find(words[i][j])==std::string::npos){
                        c++;
                        break;
                        }
                       }
                }
      //  cout<<c;
        return words.size()-c;
    }
};