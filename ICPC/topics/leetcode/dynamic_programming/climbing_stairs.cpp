#include <bits/stdc++.h>

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        int prev1 = 1; // ways to reach step 1
        int prev2 = 1; // ways to reach step 0
        int current;

        for (int i = 2; i <= n; ++i) {
            current = prev1 + prev2; // current ways = ways to reach step (n-1) + ways to reach step (n-2)
            prev2 = prev1;  // update prev2 to prev1
            prev1 = current; // update prev1 to current
        }

        return current;
    }
};

int main(){
    Solution solution;
    int n = 3;

    std::cout << solution.climbStairs(n);
}