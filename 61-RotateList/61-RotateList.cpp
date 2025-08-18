// Last updated: 18/08/2025, 18:38:46
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return 0;
        ListNode* temp = head;
        queue<int> q;
        int n = 1;
        while(temp->next!=nullptr){
            temp=temp->next;
            n++;
        }
        int i = n-k;
        // cout<<n<<endl;
        if(i<0){
            i = n+i%n;
        }
        temp = head;
        // cout<<i<<endl;
        while(i>0){
            q.push(temp->val);
            temp=temp->next;
            i--;
        }
        ListNode* ans = new ListNode(0);
        ListNode* t = ans;
        while(temp!=nullptr){
            t->next = new ListNode(temp->val);
            temp=temp->next;
            t=t->next;
        }
        while(!q.empty()){
            t->next = new ListNode(q.front());
            q.pop();
            t=t->next;
        }
        return ans->next;
    }
};