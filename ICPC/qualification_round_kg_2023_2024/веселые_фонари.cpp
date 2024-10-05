#include <bits/stdc++.h>

// bipartite - двудольный

// 3
// 7 3 (1 2) (1 3) (6 1)

// n - num of lights
// m - num of streets that connect lights
// a b - nums of lights connected by ith street

//    2
// 1  3
//    6

//    w
// y  w
//    w
bool isBipartite(int n, std::vector<std::vector<int>>& adj) {
    std::vector<int> color(n + 1, -1); // {-1 -1 -1 -1 -1 -1 -1 -1}
    for (int i = 1; i <= n; i++) {
        if (color[i] == -1) {
            std::queue<int> q; // ind of uncolored
            q.push(i);
            color[i] = 0; // colored light

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : adj[u]) {
                    if (color[v] == -1) {
                        color[v] = 1 - color[u];
                        q.push(v);
                    } else if (color[v] == color[u]) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;
    while (T--) {
        int N, M;
        std::cin >> N >> M;
        std::vector<std::vector<int>> adj(N + 1);

        for (int i = 0; i < M; i++) {
            int A, B;
            std::cin >> A >> B;
            adj[A].push_back(B);
            adj[B].push_back(A);
        }

        if (isBipartite(N, adj)) {
            std::cout << "YES" << "\n";
        } else {
            std::cout << "NO" << "\n";
        }
    }
    return 0;
}

