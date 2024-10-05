#include <bits/stdc++.h>

void solve(){
    int n, k;
    std::cin >> n >> k;
    std::vector<int> scores(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> scores[i];
    }

    int kth_score = scores[k - 1]; 
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (scores[i] >= kth_score && scores[i] > 0) {
            ++count;
        }
    }

    std::cout << count << "\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
