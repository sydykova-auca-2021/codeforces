#include <bits/stdc++.h>

void solve() {
    int n, m;
    std::cin >> n >> m;

    // (3,0)
    // {0,0,0} - count directions
    std::vector<int> degree(n + 1, 0);

    for (int i = 0; i < m; ++i) {
        int a, b;
        std::cin >> a >> b;
        // increment for both a and b (bidirectional)
        degree[a]++;
        degree[b]++; // {0,3,1,1,1} - connections for each planet
    }

    int P, Q; // range for connections
    std::cin >> P >> Q;

    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (degree[i] >= P && degree[i] <= Q) {
            count++;
        }
    }
    std::cout << count << "\n";
}



int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}