#include <iostream>
#include <vector>
#include <queue>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    // Read the amounts of gold for each dragon
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // Use a max-heap to always get the dragon with the maximum gold
    std::priority_queue<int> maxHeap;
    for (int i = 0; i < n; ++i) {
        maxHeap.push(a[i]);
    }

    long long sum = 0;
    int battles = 0;

    // Fight dragons while it's profitable
    while (!maxHeap.empty()) {
        int gold = maxHeap.top();
        maxHeap.pop();

        // Check if fighting this dragon is profitable
        if (gold > battles) {
            sum += gold - battles;
            battles++;
        } else {
            // If not profitable, we can stop
            break;
        }
    }

    std::cout << sum << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
