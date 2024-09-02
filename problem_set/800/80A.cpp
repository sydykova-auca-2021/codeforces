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

        int max_num = *max_element(a.begin(), a.end());

        int total_operations = 0;
        for (int i = 0; i < n; i++) {
            total_operations += (max_num - a[i]);
        }

        std::cout << total_operations << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
