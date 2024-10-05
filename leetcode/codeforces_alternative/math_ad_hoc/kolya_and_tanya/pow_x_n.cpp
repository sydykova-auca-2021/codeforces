#include <bits/stdc++.h>

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1.0;
        double current_product = x;

        // Exponentiation by squaring
        // x = 2.00000, n = 10
        // x = 2.00000, n = 9

        // n = 10
        // n = 5
        // n = 2

        while (N > 0) {
            if (N % 2 == 1) {
                result *= current_product;
            }
            current_product *= current_product;
            N /= 2;
        }

        return result;
    }
};


int main(){
    Solution solution;
    double x;
    int n;

    std::cin >> x >> n;
    std::cout << solution.myPow(x,n) << "\n";
}