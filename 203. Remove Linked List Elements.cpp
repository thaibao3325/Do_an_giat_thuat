class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr = &dummy;

        while (curr->next) {
            if (curr->next->val == val) {
                ListNode* toDelete = curr->next;
                curr->next = curr->next->next;
                delete toDelete; // giải phóng bộ nhớ
            } else {
                curr = curr->next;
            }
        }

        return dummy.next;
    }
};
