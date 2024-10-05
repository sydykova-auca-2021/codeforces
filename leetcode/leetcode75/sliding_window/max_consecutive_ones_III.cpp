#include <bits/stdc++.h>

class Solution {
public:
    int longestOnes(std::vector<int> &nums, int k) {
        int left = 0, right = 0;

        int zeroCount = 0; // 4
        int maxLen = 0;

        // [1,1,1,0,0,0,1,1,1,1,0]
        while (right < nums.size()) {
            // If we encounter a 0, increment zeroCount
            if (nums[right] == 0) {
                zeroCount++;
            }

            // move left pointer, until found 0
            // if found 0, decrease
            while (zeroCount > k) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }

            // Calculate the maximum length of the window
            maxLen = std::max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    std::cout << solution.longestOnes(nums,k) << "\n";
}