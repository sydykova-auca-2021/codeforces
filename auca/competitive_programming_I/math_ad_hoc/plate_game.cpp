#include <bits/stdc++.h>

void solve() {
    int a, b, r;
    std::cin >> a >> b >> r;

    int d = 2 * r;

    if (a < d || b < d) {
        std::cout << "Second\n";
    } else {
        std::cout << "First\n";
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
