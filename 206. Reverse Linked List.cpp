class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr) {
            ListNode* nxt = curr->next; // store next node
            curr->next = prev;          // reverse the link
            prev = curr;                // move prev forward
            curr = nxt;                 // move curr forward
        }
        
        return prev; // new head of reversed list
    }
};
