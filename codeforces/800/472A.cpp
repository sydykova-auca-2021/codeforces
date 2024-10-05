#include <iostream>

// composite number is num that's not prime (has more than two divisors)

// Function to check if a number is composite
bool isComposite(int x) {
    if (x <= 1) return false;
    if (x == 4) return true;  // 4 is the smallest composite number
    if (x % 2 == 0) return true;  // Any even number greater than 2 is composite
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return true;
    }
    return false;
}

int main() {
    int n;
    std::cin >> n;

    // Start with the smallest composite number and find a pair
    for (int i = 4; i < n; ++i) {
        if (isComposite(i) && isComposite(n - i)) {
            std::cout << i << " " << n - i << std::endl;
            return 0;
        }
    }

    // This should never be reached with valid input
    std::cout << "No solution found" << std::endl;
    return 0;
}
