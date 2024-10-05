#include <bits/stdc++.h>

void solve(){
    int n; // 1
    std::cin >> n;
    int x = 0;


    for(int i = 0; i < n; ++i){
        std::string statement;
        std::cin >> statement;
        if(statement.find("++") != std::string::npos){
            x++;
        } else {
            x--;
        }
    }
    std::cout << x;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
