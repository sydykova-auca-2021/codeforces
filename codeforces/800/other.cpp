#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    while(t--){
        int a, b;
        std::cin >> a >> b;

        int diff = abs(a - b);
        int moves = diff / 10;
        if(diff % 10 > 0){
            moves++;
        }
        std::cout << moves << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
