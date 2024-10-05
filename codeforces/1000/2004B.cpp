#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t; // 4

    while(t--){
        int l, r, L, R;
        std::cin >> l >> r >> L >> R; // 1 2

        if(r < L){
            std::cout << L - r << "\n";
        } else if (R < l){
            std::cout << l - R << "\n";
        } else {
            std::cout << 0 << "\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
