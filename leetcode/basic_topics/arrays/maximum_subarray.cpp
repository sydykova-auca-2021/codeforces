#include <bits/stdc++.h>

// Kadane's algorithm
class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int maxSum = nums[0]; // -2 -1
        int currentSum = 0;   // 0

        for(int num : nums) {
            // check if sum or by itself is max
            currentSum = std::max(num, currentSum + num);
            // update max
            maxSum = std::max(maxSum, currentSum);
        }
        return maxSum;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    std::cout << solution.maxSubArray(nums) << "\n";
}