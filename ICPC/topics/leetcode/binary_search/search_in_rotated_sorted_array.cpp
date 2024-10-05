#include <bits/stdc++.h>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if target is found
            if (nums[mid] == target) {
                return mid;
            }

            // Determine which half is sorted
            if (nums[left] <= nums[mid]) {
                // Left half is sorted
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;  // Search in the left half
                } else {
                    left = mid + 1;   // Search in the right half
                }
            } else {
                // Right half is sorted
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;   // Search in the right half
                } else {
                    right = mid - 1;  // Search in the left half
                }
            }
        }

        return -1;
    }
};

int main() {
    Solution solution;

    std::vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    int target1 = 0;
    std::cout << solution.search(nums1, target1) << "\n";  // Output: 4

    return 0;
}
