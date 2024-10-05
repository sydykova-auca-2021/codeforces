#include <bits/stdc++.h>

void solve(){
    int t; // 6
    std::cin >> t;

    while(t--){
        int n; // 1000
        std::cin >> n;

        int c1 = n / 3;
        int c2 = n / 3;

        if(n % 3 == 1){
            c1 += 1;
        } else if (n % 3 == 2){
            c2 += 1;
        }
        std::cout << c1 << " " << c2 << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}