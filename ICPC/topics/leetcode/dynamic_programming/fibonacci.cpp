#include <bits/stdc++.h>

// each number is the sum of the two preceding ones
// F(n) = F(n - 1) + F(n - 2)

// F(2) = F(1) + F(0) = 1 + 0 = 1
// F(3) = F(2) + F(1) = 1 + 1 = 2

class Solution {
public:
    // RECURSION
//    int fib(int n) {
//        if (n == 0) return 0;
//        if (n == 1) return 1;
//
//        return fib(n-1) + fib(n-2);
//    }

    // ITERATIVE APPROACH
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int a = 0, b = 1;
        for (int i = 2; i <= n; i++) {
            int temp = a + b; // next num + prev nums sum
            a = b;
            b = temp;
        }
        return b;
    }

    // MEMOIZATION (cache)
//    int fibHelper(int n, std::vector<int>& memo) {
//        if (n == 0) return 0;
//        if (n == 1) return 1;
//        if (memo[n] != -1) return memo[n];  // Return cached result
//
//        memo[n] = fibHelper(n - 1, memo) + fibHelper(n - 2, memo);  // Cache the result
//        return memo[n];
//    }
//
//    int fib(int n) {
//        std::vector<int> memo(n + 1, -1);  // Initialize memoization table with -1
//        return fibHelper(n, memo);
//    }


    // TABULATION
//    int fib(int n) {
//        if (n == 0) return 0;
//        if (n == 1) return 1;
//
//        std::vector<int> dp(n + 1);  // DP table to store Fibonacci numbers
//        dp[0] = 0;
//        dp[1] = 1;
//
//        for (int i = 2; i <= n; i++) {
//            dp[i] = dp[i - 1] + dp[i - 2];
//        }
//
//        return dp[n];
//    }
};

int main(){
    Solution solution;
    int n = 2;
    std::cout << solution.fib(n) << "\n";
}