#include <bits/stdc++.h>

class Solution {
public:
    long long maximumSubarraySum(std::vector<int>& nums, int k) {

        int curr_sum = 0;
        for(int i = 0; i < k; ++i){

            curr_sum += nums[i];
        }

        int max_sum = curr_sum;

        for(int i = k; i < nums.size(); ++i){
            curr_sum += nums[i] - nums[i - k];
            int max_sum = std::max(curr_sum, max_sum);
        }

        std::cout << max_sum << "\n";
    }
};