// LeetCode: Trapping Rain Water
class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = (int)height.size() - 1;
        int leftMax = 0, rightMax = 0, water = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                leftMax = max(leftMax, height[left]);
                water += leftMax - height[left];
                left++;
            } else {
                rightMax = max(rightMax, height[right]);
                water += rightMax - height[right];
                right--;
            }
        }
        return water;
    }
};

// Time: O(n); Space: O(1)
// Tests: [0,1,0,2,1,0,1,3,2,1,2,1] -> 6; [4,2,0,3,2,5] -> 9
