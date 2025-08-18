// Last updated: 18/08/2025, 18:39:07
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()<needle.length())
            return -1;
        if(haystack.find(needle)!=string::npos){
            return haystack.find(needle);
            }
        return -1;
    }
};