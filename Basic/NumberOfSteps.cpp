// LeetCode: Number of Steps to Reduce a Number to Zero
class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num != 0) {
            if (num % 2 == 0)
                num /= 2;
            else
                num--;
            steps++;
        }
        return steps;
    }
};

// Time: O(log n) for positive n; Space: O(1)
// Tests: 14 -> 6, 8 -> 4, 123 -> 12, 0 -> 0
