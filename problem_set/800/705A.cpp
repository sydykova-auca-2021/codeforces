#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;

    std::string str;
    for(int i = 1; i <= n; ++i){
        if(i % 2 == 1){
            str += "I hate";
        } else if(i % 2 == 0){
            str += "I love";
        }

        if(i < n){
            str += " that ";
        }
    }
    str += " it";
    std::cout << str << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
