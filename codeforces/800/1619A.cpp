#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    for(int i = 0; i < t; ++i){
        std::string str;
        std::cin >> str;

        if (str.length() % 2 == 0) {
            int mid = str.length() / 2;
            if (str.substr(0, mid) == str.substr(mid, mid)) {
                std::cout << "YES\n";
            } else {
                std::cout << "NO\n";
            }
        } else {
            std::cout << "NO\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
