class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) return false; // danh sách rỗng hoặc chỉ có 1 node

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (slow != fast) {
            if (!fast || !fast->next) return false; // nếu fast chạm null => không có cycle
            slow = slow->next;          // đi 1 bước
            fast = fast->next->next;    // đi 2 bước
        }

        return true; // slow và fast gặp nhau => có cycle
    }
};
