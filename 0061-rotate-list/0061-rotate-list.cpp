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
     if(head == nullptr){
         return head;
     }
     ListNode*newHead = head;
     ListNode* tail = head;   
     int length = 1;
     while(tail->next!=nullptr){
         tail = tail->next;
         length+=1;
     }
     tail->next = head;
     k = k%length;
     for(auto i = 0;i<length-k;i++){
         tail = tail->next;
     }
     newHead = tail->next;
     tail->next = nullptr;
     return newHead;
    }
};