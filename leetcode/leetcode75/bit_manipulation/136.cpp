#include <bits/stdc++.h>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {

        // XOR bitwise operation
        // a ^ a = 0
        // a ^ 0 = a

        int res = 0;
        for(int num : nums){
            res ^= num;
        }
        return res;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {2,2,1};
    std::cout << solution.singleNumber(nums) << "\n";
}