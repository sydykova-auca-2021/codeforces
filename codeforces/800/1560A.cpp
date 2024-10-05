#include <iostream>
#include <vector>

int main() {
    int max_needed = 1000;

    std::vector<int> liked_numbers;

    int current = 1;
    while (liked_numbers.size() < max_needed) {
        if (current % 3 != 0 && current % 10 != 3) {
            liked_numbers.push_back(current);
        }
        ++current;
    }

    int t;
    std::cin >> t;

    while (t--) {
        int k;
        std::cin >> k;
        std::cout << liked_numbers[k - 1] << std::endl;
    }

    return 0;
}
