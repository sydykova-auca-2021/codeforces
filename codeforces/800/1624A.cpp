#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for(int i = 0; i < n; ++i){
            std::cin >> a[i];
        }

        auto max_it = std::max_element(a.begin(), a.end());
        auto min_it = std::min_element(a.begin(), a.end());

        int res = *max_it - *min_it;

        std::cout << res << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
