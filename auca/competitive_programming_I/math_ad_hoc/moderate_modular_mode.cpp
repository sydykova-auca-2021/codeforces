#include <iostream>

int main() {
    int t;
    std::cin >> t;  // Number of test cases

    while (t--) {
        long long x, y;
        std::cin >> x >> y;

        // Solution: n = x + y works as it satisfies the condition
        std::cout << x + y << "\n";
    }

    return 0;
}
