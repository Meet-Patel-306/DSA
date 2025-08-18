// Last updated: 18/08/2025, 18:36:40
class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;
        if(c>0) pq.push({c,'c'});
        if(b>0) pq.push({b,'b'});
        if(a>0) pq.push({a,'a'});
        
        string ans="";
        while(!pq.empty()){
            auto [c1,l1]=pq.top();
            pq.pop();
            if(ans.size()>1 && ans.back()==l1 && ans[ans.size()-2]==l1){
                if(pq.empty()){
                    break;
                    }
                auto [c2,l2]=pq.top();
                pq.pop();
                ans+=l2;
                c2--;
                if(c2>0) pq.push({c2,l2});
                pq.push({c1,l1});
                }
            else{
                ans+=l1;
                c1--;
                if(c1>0) pq.push({c1,l1});
                }
            }
           
        return ans;
            
    }
};