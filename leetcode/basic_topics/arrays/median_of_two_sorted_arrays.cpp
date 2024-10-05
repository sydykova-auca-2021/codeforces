#include <bits/stdc++.h>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {

        for(int num : nums2){
            nums1.push_back(num);
        }

        std::sort(nums1.begin(), nums1.end());

        double median;
        if(nums1.size() % 2 == 0){
            median = (nums1[(nums1.size() / 2) - 1] + nums1[nums1.size() / 2]) / 2.0;
        } else {
            median = nums1[nums1.size() / 2]; // 3 / 2 = 1
        }
        return median;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums1 = {1,2};
    std::vector<int> nums2 = {3,4};

    std::cout << std::fixed << std::setprecision(5) << solution.findMedianSortedArrays(nums1,nums2) << "\n";
}