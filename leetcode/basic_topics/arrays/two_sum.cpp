#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        std::vector<std::pair<int, int>> res;

        for (int i = 0; i < nums.size(); i++) {
            res.push_back({nums[i], i}); // {3 : 0, 2 : 1, 4 : 2}
        }

        std::sort(res.begin(), res.end());

        while (left < right) {
            int sum = res[left].first + res[right].first;

            if (sum == target) {
                return {res[left].second, res[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};
    }
};


int main(){
    Solution solution;
    std::vector<int> nums = {3,3};
    int target = 6;

    std::vector<int> res = solution.twoSum(nums, target);
    for(int num : res){
        std::cout << num << " ";
    }
    std::cout << "\n";
}