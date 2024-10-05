#include <bits/stdc++.h>


// link https://olymp.krsu.edu.kg/contest/5786#

// digits = [log k (N)] + 1

void solve() {
    long long n;
    int k;

    std::cin >> n >> k;

    int digits = static_cast<int>(std::floor(std::log(n) / std::log(k))) + 1;

    // Output the result
    std::cout << digits << std::endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}