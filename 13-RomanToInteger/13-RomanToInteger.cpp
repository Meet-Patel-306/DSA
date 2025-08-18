// Last updated: 18/08/2025, 18:39:20
class Solution {
public:
    int romanToInt(string s) {
        int ans = 0,n = s.length();
        // for(int i = 0;i<n;i++){
        //     switch(s[i]){
        //         case 'C':
        //             if(i+1<n && (s[i+1] == 'M' || s[i+1]== 'D')){
        //                 break;
        //             }
        //             if(i!=0 && s[i-1] == 'X'){
        //                 ans+=90;
        //                 break;
        //             }
        //             ans+=100;
        //             break;
        //         case 'M':
        //             if(i!=0 && s[i-1] == 'C'){
        //                 ans+=900;
        //             }
        //             else{
        //                 ans+=1000;
        //             }
        //             break;
        //         case 'D':
        //             if(i!=0 && s[i-1] == 'C'){
        //                 ans+=400;
        //             }
        //             else{
        //                 // cout<<"yes";
        //                 ans+=500;
        //             }
        //             break;
        //         case 'X':
        //             if(i+1<n && (s[i+1] == 'L' || s[i+1]== 'C')){
        //                 break;
        //             }
        //             if(i!=0 && s[i-1] == 'I'){
        //                 ans+=9;
        //                 break;
        //             }
        //             ans+=10;
        //             break;
        //         case 'L':
        //             if(i!=0 && s[i-1] == 'X'){
        //                 ans+=40;
        //             }
        //             else{
        //                 ans+=50;
        //             }
        //             break;
        //         case 'I':
        //             if(i+1<n && (s[i+1] == 'V' || s[i+1]== 'X')){
        //                 break;
        //             }
        //             ans+=1;
        //             break;
        //         case 'V':
        //             if(i!=0 && s[i-1] == 'I'){
        //                 ans+=4;
        //             }
        //             else{
        //                 ans+=5;
        //             }
        //             break;
        //     }
        // }
        // return ans;
        unordered_map<char, int> roman {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        
        int total = 0;
        int prev = 0;
        
        for (int i = s.size() - 1; i >= 0; --i) {
            int curr = roman[s[i]];
            if (curr < prev)
                total -= curr;
            else
                total += curr;
            prev = curr;
        }
        
        return total;
    }
};