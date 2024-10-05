#include <bits/stdc++.h>

void solve(){
    int a, b; // 7 3
    std::cin >> a >> b;

    int min_days = std::min(a,b);
    int max_days = std::max(a,b);

    int count_f = min_days;

    int left_days = max_days - min_days;

    int count_left = (left_days) / 2;

    std::cout << count_f << " " << count_left << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
