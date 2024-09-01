#include <bits/stdc++.h>

void solve(){
    std::string str;
    std::cin >> str;

    if(str.find("0000000") != std::string::npos || str.find("1111111") != std::string::npos){
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
