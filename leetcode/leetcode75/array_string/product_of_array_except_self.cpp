#include <bits/stdc++.h>

// [1,2,3,4]
// [24,12,8,6]

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {

        std::vector<int> res(nums.size(), 1);
        int left_prod = 1;

        for(int i = 0; i < nums.size(); ++i){

        }
        return res;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {-1,1,0,-3,3};
    std::vector<int> result1 = solution.productExceptSelf(nums);

    for(int val : result1){
        std::cout << val << " ";
    }
    std::cout << "\n";
}