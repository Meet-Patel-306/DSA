// Last updated: 15/05/2026, 17:43:27
class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        int n = s.length();
        set<string> visit;
        string ans = s;
        queue<string> q;
        q.push(s);
        while(!q.empty()){
            string curr = q.front();
            q.pop();
            if(curr<ans) ans=curr;
            for(int i=1;i<n;i+=2){
                curr[i] = (((curr[i]-'0')+a)%10)+'0';
            }
            if(!visit.count(curr)){
                visit.insert(curr);
                q.push(curr);
            }
            string rotate = curr.substr(n-b) + curr.substr(0,n-b);
            if(!visit.count(rotate)){
                visit.insert(rotate);
                q.push(rotate);
            }
        }
        return ans;
    }
};