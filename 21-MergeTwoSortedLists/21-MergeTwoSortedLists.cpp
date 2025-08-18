// Last updated: 18/08/2025, 18:39:11
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(0);
        ListNode* head = ans;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val >= list2->val){
                int v= list2->val;
                head->next = new ListNode(v);
                list2 = list2->next;
            }else{
                // cout<<"hello"<<endl;
                int v = list1->val;
                head->next = new ListNode(v);
                list1 = list1->next;
            }
            // cout<<"hello"<<endl;
            head = head->next;
        }
        while(list1!=nullptr){
            head->next = new ListNode(list1->val);
            list1 = list1->next;
            head = head->next;
        }
        while(list2!=nullptr){
            head->next = new ListNode(list2->val);
            list2 = list2->next;
            head = head->next;
        }
        return ans->next;
    }
};