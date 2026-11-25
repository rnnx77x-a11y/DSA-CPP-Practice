// LeetCode: Median of Two Sorted Arrays
// Optimal binary-search partition solution.
class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        if (a.size() > b.size())
            return findMedianSortedArrays(b, a);

        int m = (int)a.size(), n = (int)b.size();
        int low = 0, high = m;

        while (low <= high) {
            int i = low + (high - low) / 2;
            int j = (m + n + 1) / 2 - i;

            int l1 = (i == 0) ? INT_MIN : a[i - 1];
            int r1 = (i == m) ? INT_MAX : a[i];
            int l2 = (j == 0) ? INT_MIN : b[j - 1];
            int r2 = (j == n) ? INT_MAX : b[j];

            if (l1 <= r2 && l2 <= r1) {
                if ((m + n) % 2 == 1) return max(l1, l2);
                return (max(l1, l2) + (double)min(r1, r2)) / 2.0;
            }
            if (l1 > r2) high = i - 1;
            else low = i + 1;
        }
        return 0.0; // Inputs are guaranteed to contain at least one element.
    }
};

// Time: O(log(min(m,n))); Space: O(1)
// Tests: [1,3], [2] -> 2.0; [1,2], [3,4] -> 2.5; [2], [] -> 2.0
