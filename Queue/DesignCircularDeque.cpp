// LeetCode: Design Circular Deque
class MyCircularDeque {
    int* a;
    int front, rear, size, k;

public:
    MyCircularDeque(int n) {
        k = n;
        a = new int[k];
        front = 0;
        rear = -1;
        size = 0;
    }

    ~MyCircularDeque() {
        delete[] a;
    }

    bool insertFront(int x) {
        if (size == k) return false;
        front = (front - 1 + k) % k;
        a[front] = x;
        if (size == 0) rear = front;
        size++;
        return true;
    }

    bool insertLast(int x) {
        if (size == k) return false;
        rear = (rear + 1) % k;
        a[rear] = x;
        if (size == 0) front = rear;
        size++;
        return true;
    }

    bool deleteFront() {
        if (size == 0) return false;
        front = (front + 1) % k;
        size--;
        if (size == 0) { front = 0; rear = -1; }
        return true;
    }

    bool deleteLast() {
        if (size == 0) return false;
        rear = (rear - 1 + k) % k;
        size--;
        if (size == 0) { front = 0; rear = -1; }
        return true;
    }

    int getFront() {
        return size == 0 ? -1 : a[front];
    }

    int getRear() {
        return size == 0 ? -1 : a[rear];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == k;
    }
};

// Time: O(1) per operation; Space: O(k)
// Test: capacity=3; insertLast(1), insertLast(2), insertFront(3)
// -> all true; insertFront(4) -> false; getRear() -> 2
