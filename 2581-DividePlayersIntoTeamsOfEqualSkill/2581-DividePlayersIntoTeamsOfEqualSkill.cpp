// Last updated: 18/08/2025, 18:35:12
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        int i=0,j=n-1;
        sort(skill.begin(),skill.end());
        long long sum=0;
        int team=skill[i]+skill[j];
        while(i<n/2&&j>=n/2){
            if(team==(skill[i]+skill[j])){
                sum+=skill[i]*skill[j];
                }
            else{ return -1;}
            i++;
            j--;
            }
        if(sum==0) return -1;
        return sum;
    }
};