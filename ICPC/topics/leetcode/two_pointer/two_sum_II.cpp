#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {

        int left = 0, right = numbers.size() - 1;

        std::vector<std::pair<int, int>> res;

        for(int i = 0; i < numbers.size(); ++i){
            res.push_back({numbers[i], i});
        }

        std::sort(res.begin(), res.end());

        while(left < right){
            int sum = numbers[left] + numbers[right];

            if(sum == target){
                return {res[left].second + 1, res[right].second + 1};
            } else if(sum < target){
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
    std::vector<int> numbers = {2,7,11,15};
    int target = 9;

    std::vector<int> res = solution.twoSum(numbers, target);

    for(int num : res){
        std::cout << num << "\n";
    }

    return 0;
}