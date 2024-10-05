#include <bits/stdc++.h>

class Solution {
public:
    int largestAltitude(std::vector<int>& gain) {
        int max_alt = 0;
        int curr_alt = 0;

        for(int g : gain){
            curr_alt += g;
            max_alt = std::max(max_alt, curr_alt);
        }

        return max_alt;

//        std::vector<int> altitudes;
//        altitudes.push_back(0);
//
//        int sum = 0;
//        for(int i = 0; i < gain.size(); ++i){
//            sum += gain[i];
//            altitudes.push_back(sum);
//        }
//        return *std::max_element(altitudes.begin(), altitudes.end());
    }
};

int main(){
    Solution solution;
    std::vector<int> gain = {-4,-3,-2,-1,4,3,2};

    std::cout << solution.largestAltitude(gain) << "\n";
}