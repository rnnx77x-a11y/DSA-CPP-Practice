// LeetCode: Linked List Cycle
// LeetCode provides the ListNode definition.
class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        return false;
    }
};

// Floyd's slow/fast pointer algorithm.
// Time: O(n); Space: O(1)
// Tests: [3,2,0,-4] with tail connected to index 1 -> true; [1] -> false
