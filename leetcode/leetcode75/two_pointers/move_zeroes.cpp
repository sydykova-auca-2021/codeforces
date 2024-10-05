#include <bits/stdc++.h>

class Solution {
public:
    void moveZeroes(std::vector<int> &nums) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }
        for (int i = j; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {0,1,0,3,12};

    solution.moveZeroes(nums);
    for(int num : nums){
        std::cout << num << " ";
    }

    return 0;
}