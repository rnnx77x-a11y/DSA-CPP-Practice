// LeetCode: Implement Stack using Queues
class MyStack {
    queue<int> q;

public:
    MyStack() {}

    void push(int x) {
        q.push(x);
        int count = (int)q.size() - 1;
        while (count--) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int x = q.front();
        q.pop();
        return x;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

// One queue; newest item is rotated to the front.
// Time: push O(n), pop O(1), top O(1), empty O(1); Space: O(n)
// Test: push(1), push(2), top()->2, pop()->2, top()->1
