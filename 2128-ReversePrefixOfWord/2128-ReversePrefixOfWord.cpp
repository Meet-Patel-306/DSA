// Last updated: 18/08/2025, 18:35:52
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos=word.find(ch);
        if(pos){
            reverse(word.begin(),word.begin()+pos+1);
            return word;
            }
        else{
            return word;
            }
                  

    }
};