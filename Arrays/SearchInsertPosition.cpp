// LeetCode: Search Insert Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = (int)nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};

// Binary-search implementation.
// Time: O(log n); Space: O(1)
// Tests: [1,3,5,6], 5 -> 2; target 2 -> 1; target 7 -> 4; target 0 -> 0
