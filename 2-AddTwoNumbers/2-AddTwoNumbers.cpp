// Last updated: 18/08/2025, 18:39:31
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *sum = new ListNode(0);
        ListNode *head = sum;
        int crray = 0;
        // int c=0;
        while(l1 != nullptr || l2 != nullptr || crray != 0 ){
            int v1 = (l1!=nullptr)?l1->val:0;
            // cout<<v1 <<" "<< c++<<endl;
            int v2 =(l2!=nullptr)? l2->val:0;
            if(l1){
                l1= l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
            int totalAdd = v1+v2+crray;
            crray = (totalAdd)/10;
            head->next = new ListNode(totalAdd%10);
            // increment pointer
            head = head->next;
        }
        // l1-> 2->4
        // l2 -> 1->3
        // sum-> 0->3->7
        return sum->next;
    }
};