// LeetCode: Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < (int)nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

// Time: O(n); Space: O(1)
// Tests: [0,1,0,3,12] -> [1,3,12,0,0]; [0] -> [0]
