#include <bits/stdc++.h>

class Solution {
public:
    int maxScore(std::vector<int>& cardPoints, int k) {

        if(k == cardPoints.size()){
            int total_sum = 0;

            for(int i = 0; i < cardPoints.size(); ++i) {
                total_sum += cardPoints[i];
            }
            return total_sum;
        }

        if(cardPoints[cardPoints.size() - 2] > cardPoints[1]){
            int first_sum = 0;
            for(int i = cardPoints.size() - 1; i >= cardPoints.size() - k; --i){
                first_sum += cardPoints[i];
            }
            return first_sum;
        } else {
            int second_sum = 0;
            for(int i = 0; i < k; ++i){
                second_sum += cardPoints[i];
            }
            return second_sum;
        }
    }
};

int main(){
    Solution solution;
    std::vector<int> cardPoints = {1,2,3,4,5,6,1};
    int k = 3;

    int res = solution.maxScore(cardPoints, k);

    std::cout << res << "\n";
}