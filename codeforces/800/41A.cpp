#include <bits/stdc++.h>

void solve(){
    std::string s, t;
    std::cin >> s >> t;

    std::reverse(s.begin(), s.end());
    if(s == t){
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
