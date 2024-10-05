#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;


    for(int i = 0; i < n; ++i){
        int a,b;
        std::cin >> a >> b;

        if(a % b == 0){
            std::cout << "0\n";
        } else {
            std::cout << b - (a % b) << "\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
