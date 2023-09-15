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
        // base case 
        if(l1 == nullptr){
            return l2;
        }else if(l2==nullptr){
            return l1; 
        }
        ListNode*dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;
        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            int sum = carry+x+y;
            carry = sum/10;
            curr->next = new ListNode(sum%10);
            curr=curr->next;
            l1 =  l1 ? l1->next:nullptr;
            l2 = l2 ? l2->next:nullptr;   
        }
        return dummy->next;
    }
};