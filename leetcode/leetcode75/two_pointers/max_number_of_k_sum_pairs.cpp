#include <bits/stdc++.h>

class Solution {
public:
    int maxOperations(std::vector<int>& nums, int k) {

        int left = 0, right = nums.size() - 1;
        std::sort(nums.begin(), nums.end());

        int operations = 0;
        while(left < right){
            int sum = nums[left] + nums[right];

            if(sum == k){
                operations++;
                left++;
                right--;
            } else if (sum < k){
                left++;
            } else {
                right--;
            }
        }
        return operations;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {3,1,3,4,3};
    int k = 6;

    std::cout << solution.maxOperations(nums, k) << "\n";
}