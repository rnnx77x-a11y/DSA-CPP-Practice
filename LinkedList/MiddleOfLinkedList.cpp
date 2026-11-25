// LeetCode: Middle of the Linked List
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

// Time: O(n); Space: O(1)
// Tests: [1,2,3,4,5] -> node 3; [1,2,3,4,5,6] -> node 4
