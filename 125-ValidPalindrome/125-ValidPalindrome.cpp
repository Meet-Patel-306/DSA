// Last updated: 18/08/2025, 18:38:37
//#include <bits/stdc++.h>
class Solution {
public:
 
    bool isPalindrome(string s) {
        string str="";
        for(char i:s){
            if(isalnum(i))
                str+=i;
            }
        int l=0,r=str.length()-1;
        while(l<r){
            if(tolower(str[l])!=tolower(str[r]))
                return false;
            l++;
            r--;
            }
        return true;

    }
};