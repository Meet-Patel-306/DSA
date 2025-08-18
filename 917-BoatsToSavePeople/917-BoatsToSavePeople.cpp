// Last updated: 18/08/2025, 18:37:14
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       int i=0,c=0;
        sort(people.begin(), people.end());
        int j=people.size()-1;
        while(i<=j){
            if(people[i]+people[j]<=limit){
               i++;
                }
            j--;
            c++;
            }
        return c;
    }
};