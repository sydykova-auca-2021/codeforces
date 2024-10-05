#include <bits/stdc++.h>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        std::vector<int> a(nums.size());

        k = k % nums.size();
        // 7,6,5,4,3,2,1
        std::reverse(nums.begin(), nums.end());
        // 5 6 7 4 3 2 1
        std::reverse(nums.begin(), nums.begin() + k);
        // 5 6 7 1 2 3 4
        std::reverse(nums.begin() + k, nums.end());
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {1,2,3,4,5,6,7};
    int k;
//    std::cout << solution.rotate(nums,k) << "\n";
}