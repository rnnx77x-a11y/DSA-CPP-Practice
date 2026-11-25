// LeetCode: Binary Search
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = (int)nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};

// Time: O(log n); Space: O(1)
// Tests: [1,3,5,7,9], 5 -> 2; [1,3,5,7,9], 2 -> -1
