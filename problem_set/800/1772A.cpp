#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    while(t--){
        std::string exp;
        std::cin >> exp;


        int a = exp[0] - '0';
        int b = exp[2] - '0';
        int sum = a + b;
        std::cout << sum << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
