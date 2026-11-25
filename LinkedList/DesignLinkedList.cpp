// LeetCode: Design Linked List
class MyLinkedList {
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };

    Node* head;
    int length;

public:
    MyLinkedList() : head(nullptr), length(0) {}

    int get(int index) {
        if (index < 0 || index >= length) return -1;
        Node* cur = head;
        while (index--) cur = cur->next;
        return cur->val;
    }

    void addAtHead(int val) {
        Node* node = new Node(val);
        node->next = head;
        head = node;
        length++;
    }

    void addAtTail(int val) {
        addAtIndex(length, val);
    }

    void addAtIndex(int index, int val) {
        if (index < 0) index = 0;
        if (index > length) return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* cur = head;
        for (int i = 0; i < index - 1; i++)
            cur = cur->next;

        Node* node = new Node(val);
        node->next = cur->next;
        cur->next = node;
        length++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= length) return;

        if (index == 0) {
            Node* old = head;
            head = head->next;
            delete old;
        } else {
            Node* cur = head;
            for (int i = 0; i < index - 1; i++)
                cur = cur->next;
            Node* old = cur->next;
            cur->next = old->next;
            delete old;
        }
        length--;
    }
};

// Time: get O(n), addAtHead O(1), addAtTail O(n),
// addAtIndex O(n), deleteAtIndex O(n); Space: O(n)
