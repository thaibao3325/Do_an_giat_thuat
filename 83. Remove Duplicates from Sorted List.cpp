class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        while (curr && curr->next) {
            if (curr->val == curr->next->val) {
                // bỏ qua node trùng lặp
                ListNode* toDelete = curr->next;
                curr->next = curr->next->next;
                delete toDelete; // giải phóng bộ nhớ
            } else {
                curr = curr->next; // di chuyển sang node tiếp theo
            }
        }
        return head;
    }
};
