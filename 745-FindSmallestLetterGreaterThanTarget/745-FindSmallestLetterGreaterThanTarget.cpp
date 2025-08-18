// Last updated: 18/08/2025, 18:37:26
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        for(int i=0;i<n;i++){
            if(letters[i]>target)
                return letters[i];
            }
        return letters[0];
    }
};