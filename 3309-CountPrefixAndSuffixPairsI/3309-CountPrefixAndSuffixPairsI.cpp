// Last updated: 18/08/2025, 18:34:49
class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        int n=words.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int ws=words[i].size();
                int n2=words[j].size();
                int a=1;
                if(ws>words[j].size()) continue;
                //pre & suff check 
                for(int k=0;k<ws;k++){
                    if((words[i][k]!=words[j][k])|| (words[i][k]!=words[j][n2-ws+k])){ 
                              a=0;                                       }
                    
                    }
                if(a){ 
                  //  cout<<words[i]<<"--"<<words[j]<<endl;
                    ans++;}
                }
            }
        return ans;
                
    }
};