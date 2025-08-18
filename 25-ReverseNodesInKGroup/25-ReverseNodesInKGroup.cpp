// Last updated: 18/08/2025, 18:39:12
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<vector<int>> s;
        // cout<<"hello"<<endl;
        ListNode* temp = head;
        int n = 0;
        while(temp!=nullptr){
            temp=temp->next;
            n++;
        }
        if(k>n) return head;
        // cout<<"hello"<<endl;
        temp = head;
        for(int i=0;i<n/k;i++){
            // cout<<"hello"<<endl;
            vector<int> t2;
            for(int j=0;j<k;j++){
                t2.push_back(temp->val);
                temp=temp->next;
            }
            reverse(t2.begin(),t2.end());
            // cout<<"hello"<<endl;
            s.push_back(t2);
        }
        temp=head;
        for(auto i:s){
            for(int j:i){
                // cout<<temp->val<<"--"<<j<<endl;
                temp->val = j;
                // cout<<temp->val<<" || "<<j<<endl;
                temp = temp->next;
            }
        }
        return head;
    }
};