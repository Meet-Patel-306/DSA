// Last updated: 18/08/2025, 18:35:46
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());

        sort(students.begin(),students.end());

        int ans = 0;

        for(int i=0;i<seats.size();i++){

            ans+=abs(seats[i]-students[i]);

        }

        return ans;
    }
};