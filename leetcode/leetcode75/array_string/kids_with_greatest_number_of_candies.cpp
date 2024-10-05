#include <bits/stdc++.h>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int max_num = *std::max_element(candies.begin(), candies.end());

        std::vector<bool> res(candies.size());
        for(int i = 0; i < candies.size(); ++i){
            res[i] = (candies[i] + extraCandies) >= max_num;
        }

        return res;
    }
};

int main(){
    Solution solution;
    std::vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;

    std::vector<bool> result = solution.kidsWithCandies(candies, extraCandies);
    for (bool r : result) {
        std::cout << (r ? "true" : "false") << "\n";
    }
    return 0;

//    std::vector<bool> result = solution.kidsWithCandies(candies,extraCandies);
//    std::cout << "[";
//    for (int i = 0; i < result.size(); ++i) {
//        std::cout << (result[i] ? "true" : "false");
//        if (i != result.size() - 1) {
//            std::cout << ",";
//        }
//    }
//    std::cout << "]" << std::endl;
//    return 0;
}