// Last updated: 03/04/2026, 16:00:28
// class Solution {
// public:
//     bool operation(string &s,int n){
//         int i,flag = 0;
//         for(i = 0;i<n-1;i++){
//             if(s[i] == '1' && s[i+1] == '0'){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(!flag) return false;
//         // cout<<i<<" =="<<endl;
//         for(int j = i+1;j<n;j++){
//             if(s[j]=='1'){
//                 s.erase(i,1);
//                 s.insert(j,"1");
//                 return true;
//             }
//         }
//         s.erase(i,1);
//         s.insert(n-1,"1");
//         return true;
//     }
//     int maxOperations(string s) {
//         int n = s.size();
//         int ans = 0;
//         while(true){
//             if(operation(s,n)){
//                 // cout<<s<<endl;
//                 ans++;
//             }else{
//                 break;
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int maxOperations(string s) {
        int ones = (s[0] == '1'), ans = 0, n = s.size();
        for(int i = 1;i<n;i++){
            if(s[i] == '1') ones++;
            else if(s[i-1] == '1') ans+=ones;
        }
        return ans;
    }
};
