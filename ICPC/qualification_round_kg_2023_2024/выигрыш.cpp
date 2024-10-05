#include <bits/stdc++.h>

void solve() {
    // n - airports
    // m - a_flights
    // k - s_flights

    // m = (n * (n - 1)) / 2

    // 4 4 4
    // 1 2
    // 1 3
    // 2 4
    // 3 4

    // 1 2 3 4
    // (1 <-> 2) (1 <-> 3)
    // (2 <-> 4)
    // (3 <-> 4)

    //     2
    // 1       4
    //     3

    // 1 2 4 3 1
    // 1 3 4 2 1

    // 1 2 4 2 1
    // 1 3 4 3 1

    // 1 2 1 2 1
    // 1 3 1 3 1

    // 1 3 1 2 1
    // 1 2 1 3 1


    int n, m, k;
    std::cin >> n >> m >> k;

    std::vector<std::vector<int>> adj(n + 1);

    for(int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    std::vector<std::vector<long long>> dp(k + 1, std::vector<long long>(n + 1, 0));
    dp[0][1] = 1;

    for (int k = 1; k <= k; k++) {
        for (int i = 1; i <= n; i++) {
            for (int next : adj[i]) {
                dp[k][i] += dp[k - 1][next];
            }
        }
    }
    std::cout << dp[k][1] << "\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}