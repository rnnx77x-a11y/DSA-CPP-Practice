// LeetCode: Remove Nth Node From End of List
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        for (int i = 0; i < n; i++)
            fast = fast->next;

        if (fast == nullptr)
            return head->next;

        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;
        return head;
    }
};

// Time: O(n); Space: O(1)
// Tests: [1,2,3,4,5], n=2 -> [1,2,3,5]; [1], n=1 -> []
