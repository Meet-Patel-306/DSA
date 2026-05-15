// Last updated: 15/05/2026, 17:43:36
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        // int n = colors.length();
        // int time = 0;
        // char prev = colors[0];
        // int need_sum = 0;
        // int need_max= 1;
        // int consecutive = 0;
        // for(int i = 0;i<n;i++){
        //     if(colors[i] == prev){
        //         need_sum+=neededTime[i];
        //         need_max = max(need_max,neededTime[i]);
        //         consecutive++;
        //     }else{
        //         if(consecutive > 1){
        //             time += need_sum - need_max;
        //             cout<<time<<" "<<need_sum<<" "<<need_max<<" "<<i<<endl;
        //         }
        //         prev = colors[i];
        //         need_sum = neededTime[i];
        //         need_max = max(1,neededTime[i]);
        //         consecutive = 1;
        //     }
        // }
        // if(consecutive > 1){
        //     time += need_sum - need_max;
        //     cout<<time<<" "<<need_sum<<" "<<need_max<<" last i"<<endl;
        // }

        // return time;

        // method 2

        int time = 0;
        int n = colors.length();

        for(int i = 1;i<n;i++){
            if(colors[i] == colors[i-1]){
                time += min(neededTime[i],neededTime[i-1]);
                neededTime[i] = max(neededTime[i],neededTime[i-1]);
            }
        }
        return time;
    }
};