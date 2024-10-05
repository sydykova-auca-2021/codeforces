#include <bits/stdc++.h>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int totalSum = 0, leftSum = 0;

        for (int num : nums) {
            totalSum += num;
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            leftSum += nums[i];
        }

        return -1;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {1,7,3,6,5,6};
    std::cout << solution.pivotIndex(nums) << "\n";
}