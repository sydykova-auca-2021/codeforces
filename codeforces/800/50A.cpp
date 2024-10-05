#include <bits/stdc++.h>

void solve(){
    int m, n;
    std::cin >> m >> n;

    int total = m * n;
    int dominoes = total / 2;
    std::cout << dominoes;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
