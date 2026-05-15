class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* first = &dummy;
        ListNode* second = &dummy;

        // Di chuyển first đi trước n+1 bước
        for (int i = 0; i <= n; i++) {
            first = first->next;
        }

        // Di chuyển cả hai cho đến khi first chạm null
        while (first) {
            first = first->next;
            second = second->next;
        }

        // Xóa node thứ n từ cuối
        ListNode* toDelete = second->next;
        second->next = second->next->next;
        delete toDelete; // giải phóng bộ nhớ

        return dummy.next;
    }
};
