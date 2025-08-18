// Last updated: 18/08/2025, 18:36:16
class Solution {
public:
    string reverseInvert(string s){
        reverse(s.begin(),s.end());
        string ans="";
        for(char c:s){
            if(c=='1'){
                ans+='0';
                }
            else{
                ans+='1';
                }
            }
        return ans;
        }
    char findKthBit(int n, int k) {
        unordered_map<int, string> um;
       um[0]="0";
        for(int i=1;i<n;i++){
            string str=um[i-1];
            string s="";
            s+=str;
           // cout<<s<<endl;
            s+="1";
            //cout<<s<<endl;
            string str2=reverseInvert(str);
            s+=str2;
            //cout<<str2<<endl;break;
            um[i]=s;
           // cout<<um[i]<<endl;
            }
        string ans=um[n-1];
        //cout<<ans;
        return ans[k-1];
    }
};