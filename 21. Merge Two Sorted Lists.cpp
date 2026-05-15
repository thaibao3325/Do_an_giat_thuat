class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);          // nút giả để dễ quản lý kết quả
        ListNode* tail = &dummy;    // con trỏ để nối các nút mới

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // nối phần còn lại của list1 hoặc list2
        tail->next = (list1 ? list1 : list2);

        return dummy.next; // trả về đầu danh sách kết quả
    }
};
