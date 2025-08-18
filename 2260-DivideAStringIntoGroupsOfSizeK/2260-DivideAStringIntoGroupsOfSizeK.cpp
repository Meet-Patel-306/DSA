// Last updated: 18/08/2025, 18:35:37
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int n=s.length();
        int sz=n/k;
        cout<<sz;
        int i;
        for(i=0;i<sz*k;i+=k){
            string t=s.substr(i,k);
            ans.push_back(t);
        }
        if(i>=n) return ans;
        string t="";
        for(int j=i;j<n;j++){
            t+=s[j];
        }
        while(t.length()<k) t+=fill;
        ans.push_back(t);
            
        
        return ans;
    }
};