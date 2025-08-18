// Last updated: 18/08/2025, 18:38:24
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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* next;
        while(temp != nullptr){
            next = temp->next;
            temp->next= prev;
            prev = temp;
            temp = next;
        }
       
        return prev;
    }
};