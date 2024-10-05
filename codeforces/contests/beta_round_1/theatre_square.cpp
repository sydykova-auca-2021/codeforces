#include <bits/stdc++.h>

void solve(){
    int n,m,a;
    std::cin >> n >> m >> a;

    // celing division - if remainder, round up to next num
    // ceiling division = (n + a - 1) / a

    long long tiles_horizontally = (n + a - 1) / a;
    long long tiles_vertically = (m + a - 1) / a;

    long long res = tiles_horizontally * tiles_vertically;

    std::cout << res << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}