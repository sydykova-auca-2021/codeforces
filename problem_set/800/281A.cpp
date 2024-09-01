#include <bits/stdc++.h>

void solve(){
    std::string str;
    std::cin >> str;

    if(!str.empty() && islower(str[0])){
        str[0] = toupper(str[0]);
    }
    std::cout << str;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
