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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* temp = head;
        int length = 0;
        while(temp!=nullptr){
            length++;
            temp = temp->next;
        }
        // calculate which index is to be removed length -n +1
        length = length - n;
        ListNode*curr = dummy;
        while(length>0){
            length--;
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return dummy->next;
    }
};