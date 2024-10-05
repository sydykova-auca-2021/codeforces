#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    if(n % 2 == 0 && n >= 4){
        std::cout << "YES" << "\n";
    } else {
        std::cout << "NO" << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
