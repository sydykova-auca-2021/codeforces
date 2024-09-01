#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;
    std::cin >> n >> m;

    vector<string> pattern(n, string(m, '.'));

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            fill(pattern[i].begin(), pattern[i].end(), '#');
        } else {
            if ((i / 2) % 2 == 0) {
                pattern[i][m - 1] = '#';
            } else {
                pattern[i][0] = '#';
            }
        }
    }


    for (const auto& row : pattern) {
        std::cout << row << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
