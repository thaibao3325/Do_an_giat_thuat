class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        // 1. Tìm middle
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Đảo ngược nửa sau
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;
        while (curr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        slow->next = nullptr; // cắt danh sách thành 2 nửa

        // 3. Trộn xen kẽ
        ListNode* first = head;
        ListNode* second = prev;
        while (second) {
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;

            first->next = second;
            second->next = tmp1;

            first = tmp1;
            second = tmp2;
        }
    }
};
