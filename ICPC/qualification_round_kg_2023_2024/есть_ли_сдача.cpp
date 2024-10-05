#include <bits/stdc++.h>

void solve() {
    long long A, B, N;
    std::cin >> A >> B >> N;

    if (A > B) {
        std::swap(A, B);
    }

    long long min_coins = LLONG_MAX;

    for (long long a_coins = 0; a_coins * A <= N; ++a_coins) {
        long long remaining = N - a_coins * A;

        if (remaining % B == 0) {
            long long b_coins = remaining / B;
            min_coins = std::min(min_coins, a_coins + b_coins);
        }
    }

    if (min_coins == LLONG_MAX) {
        std::cout << 0 << "\n";
    } else {
        std::cout << min_coins << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false); // optimizes I/O speed, turn off sync with scanf/printf; needs include <iomanip>
    std::cin.tie(NULL); // turn off sync between cin and cout

    solve();
    return 0;
}



