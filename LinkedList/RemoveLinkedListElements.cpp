// LeetCode: Remove Linked List Elements
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val)
            head = head->next;

        ListNode* cur = head;
        while (cur != nullptr && cur->next != nullptr) {
            if (cur->next->val == val)
                cur->next = cur->next->next;
            else
                cur = cur->next;
        }
        return head;
    }
};

// Time: O(n); Space: O(1)
// Tests: [1,2,6,3,4,5,6], val=6 -> [1,2,3,4,5]; [7,7], val=7 -> []
