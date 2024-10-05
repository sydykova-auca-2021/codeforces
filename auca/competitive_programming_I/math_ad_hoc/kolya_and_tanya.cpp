#include <bits/stdc++.h>

void solve() {
    long long n, a = 1, b = 1, mod = 1e9 + 7;
    std::cin >> n;

    // i < 3
    // i = 0, a = 3
    // i = 1, a = 9
    // i = 2, a = 27

    // a = total num of ways to assign coins to all gnomes
    for (int i = 0; i < n * 3; i++){
        // if a < mod, then a % mod = a
        a = (a * 3) % mod; // 3 coins for each gnome
    }

    // 1 2 3
    // 2 1 3
    // 1 3 2

    // 3 2 1
    // 3 1 2

    // 2 3 1
    // 2 1 3

    // 7 ways to assign coins so that sum == 6
    for (int i = 0; i < n; i++){
        b = (b * 7) % mod;
    }

    // 27 - 7
    // if a - b is negative, + mod will make positive equivalent of negative number
    // if a - b is positive, it will stay same after %
    std::cout << (a - b + mod) % mod;
}



int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}