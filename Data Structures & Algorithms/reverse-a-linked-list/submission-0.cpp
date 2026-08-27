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
        ListNode* prev=0;
        ListNode* current=head;
        ListNode* nextnode=head; 
        while(nextnode!=nullptr){
            nextnode=nextnode->next;
            current->next=prev;
            prev=current;
            current=nextnode;
        }
        return prev;
    }
};
