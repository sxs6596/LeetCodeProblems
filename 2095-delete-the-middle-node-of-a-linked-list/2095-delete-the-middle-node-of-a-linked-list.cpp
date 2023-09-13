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
    ListNode* deleteMiddle(ListNode* head) {
        // define Pointers 
        ListNode* dummy = new ListNode();
        dummy->next = head; 
        
        ListNode*slow = head;
        ListNode*fast = head; 
        ListNode* prev = dummy;
        // check the condition. 
        while(fast!=nullptr && fast->next!=nullptr){
            fast = fast->next->next;
            prev = slow;
            slow = slow->next; 
        }
        // after fast reaching the end 
        // deleting the middle node. 
        prev->next = slow->next;
        
        // return the head. 
        
        return dummy->next;
    }
};