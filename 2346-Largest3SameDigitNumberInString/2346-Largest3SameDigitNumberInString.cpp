// Last updated: 18/08/2025, 18:35:33
class Solution {
public:
    string largestGoodInteger(string num) {
        int ans = -1;
        string ansS = "";
        int n = num.size();
        for(int i = 0;i<n-2;i++){
            if((num[i] == num[i+1])&&(num[i+1] == num[i+2])){
                string temp = num.substr(i,3);
                if(ans<stoi(temp)){
                    ansS = temp;
                    ans = stoi(temp);
                }
            }
        }   
        return ansS;
    }
};