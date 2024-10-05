#include <bits/stdc++.h>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {

        int left = 0, right = nums.size() - 1;

        for(int i = 0; i < nums.size(); ++i){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                return mid;
            } else if(target > nums[mid]){
                left = mid + 1;
            } else if(target < nums[mid]){
                right = mid - 1;
            }
        }
        return -1;
    }
};