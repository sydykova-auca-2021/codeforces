#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::vector<int>> findDifference(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::set<int> set1(nums1.begin(), nums1.end());
        std::set<int> set2(nums2.begin(), nums2.end());

        std::vector<int> diff1, diff2;

        for (int num : set1) {
            if (set2.find(num) == set2.end()) {
                diff1.push_back(num);
            }
        }

        for (int num : set2) {
            if (set1.find(num) == set1.end()) {
                diff2.push_back(num);
            }
        }

        return {diff1, diff2};
    }
};

int main(){
    Solution solution;
    std::vector<int> nums1 = {1,2,3};
    std::vector<int> nums2 = {2,4,6};

    std::vector<std::vector<int>> result = solution.findDifference(nums1, nums2);
    for (const auto res : result) {
        for (int r : res) {
            std::cout << r << " ";
        }
    }
}