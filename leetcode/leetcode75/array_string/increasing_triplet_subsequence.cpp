#include <bits/stdc++.h>

class Solution {
public:
    bool increasingTriplet(std::vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;

        for (int num : nums) {
            if (num <= first) {
                first = num;
            } else if (num <= second) {
                second = num; // first < num && num < second
            } else {
                return true; // first < second < num
            }
        }
        return false;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {5,4,3,2,1};
    std::cout << (solution.increasingTriplet(nums) ? "true" : "false") << "\n";
}