// LeetCode: Intersection of Two Linked Lists
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        while (a != b) {
            a = (a == nullptr) ? headB : a->next;
            b = (b == nullptr) ? headA : b->next;
        }
        return a;
    }
};

// Time: O(m+n); Space: O(1)
// Tests: lists sharing a physical node -> that node; disjoint lists -> nullptr
