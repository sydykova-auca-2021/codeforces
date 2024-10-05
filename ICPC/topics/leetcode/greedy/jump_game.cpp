#include <bits/stdc++.h>

class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int maxReach = 0; // 2
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxReach) {
                return false;
            }
            maxReach = std::max(maxReach, i + nums[i]);
        }
        return true;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {2,3,1,1,4};

    std::cout << (solution.canJump(nums) ? "true" : "false") << "\n";
    return 0;
}