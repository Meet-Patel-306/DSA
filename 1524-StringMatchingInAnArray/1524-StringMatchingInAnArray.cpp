// Last updated: 18/08/2025, 18:36:28
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i!=j && words[j].find(words[i])!=string::npos){
                    //cout<<words[i]<<endl;
                    
         if(find(ans.begin(),ans.end(),words[i])==ans.end())    ans.push_back(words[i]);
                    }
                   }
                   }
        return ans;
                        
    }
};