#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {

        std::sort(intervals.begin(), intervals.end());

        int curr_start = intervals[0][0];
        int curr_end = intervals[0][1];

        std::vector<std::vector<int>> merged;

        for(int i = 1; i < intervals.size(); ++i){
            int next_start = intervals[i][0];
            int next_end = intervals[i][1];

            if(next_start <= curr_end){
                curr_end = std::max(curr_end, next_end);
            } else {
                merged.push_back({curr_start, curr_end}); // curr interval (previous), push_back only if doesn't match
                curr_start = next_start;
                curr_end = next_end;
            }
        }
        merged.push_back({curr_start, curr_end}); // push_back last vector
        return merged;
    }
};


int main(){
    Solution solution;
    std::vector<std::vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};
    std::vector<std::vector<int>> res = solution.merge(intervals);

    for(int i = 0; i < res.size(); ++i){
        for(int j = 0; j < res[i].size(); ++j){
            std::cout << res[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}