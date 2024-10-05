#include <bits/stdc++.h>

class Solution {
public:
    double findMaxAverage(std::vector<int> &nums, int k) {
        int n = nums.size();
        double maxSum = 0;

        for (int i = 0; i < k; i++) {
            maxSum += nums[i];
        }
        double currentSum = maxSum;

        for (int i = k; i < n; i++) {
            currentSum += nums[i] - nums[i - k];
            maxSum = std::max(maxSum, currentSum);
        }
        return maxSum / k;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    std::cout << std::fixed << std::setprecision(5) << solution.findMaxAverage(nums, k) << "\n";
    return 0;
}