#include <bits/stdc++.h>

void solve() {
    int w, h, n;
    std::cin >> w >> h >> n;

    std::set<int> horizontalCuts = {0, h};
    std::set<int> verticalCuts = {0, w};

    std::multiset<int> maxHeights = {h};
    std::multiset<int> maxWidths = {w};

    for (int i = 0; i < n; ++i) {
        char type;
        int pos;
        std::cin >> type >> pos;

        if (type == 'H') {
            auto it = horizontalCuts.lower_bound(pos);
            int next = *it, prev = *std::prev(it);
            horizontalCuts.insert(pos);

            maxHeights.erase(maxHeights.find(next - prev));
            maxHeights.insert(next - pos);
            maxHeights.insert(pos - prev);
        } else {
            auto it = verticalCuts.lower_bound(pos);
            int next = *it, prev = *std::prev(it);
            verticalCuts.insert(pos);

            maxWidths.erase(maxWidths.find(next - prev));
            maxWidths.insert(next - pos);
            maxWidths.insert(pos - prev);
        }

        long long maxHeight = *maxHeights.rbegin();
        long long maxWidth = *maxWidths.rbegin();
        std::cout << maxHeight * maxWidth << "\n";
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}