// Last updated: 18/08/2025, 18:39:15
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
    int sizeLN(ListNode* temp) {
        int c = 0;
        while (temp != nullptr) {
            temp = temp->next;
            c++;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t = head;
        int s = sizeLN(t);
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        for (int i = 0; i < s - n ; i++) {
            ans->next = new ListNode(head->val);
            ans = ans->next;
            head = head->next;
        }
        head = head->next;
        while(head!=nullptr){
            ans->next = new ListNode(head->val);
            ans = ans->next;
            head = head->next;
        }
        return temp->next;
    }
};