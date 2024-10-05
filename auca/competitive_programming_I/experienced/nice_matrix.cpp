#include <bits/stdc++.h>

// all col and rows palindrome

int a[105][105];

void solve() {
    int n, m; // row col
    std::cin >> n >> m; // 4 2

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> a[i][j];
        }
    }
    long long total = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // horizontally symmetric (a[0][1])
            int other1 = a[i][m - j - 1];
            // vertically symmetric (a[3][0])
            int other2 = a[n - i - 1][j];

            // 4 2 2
            std::vector<int> b = {a[i][j], other1, other2};

            // 2 2 4
            sort(b.begin(), b.end());
            // a[0][0] = a[0][1] = a[3][0] = 2
            a[i][j] = a[i][m - j - 1] = a[n - i - 1][j] = b[1];
            total += (b[2] - b[1]) + (b[1] - b[0]);
        }
    }

    std::cout << total << "\n";
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
