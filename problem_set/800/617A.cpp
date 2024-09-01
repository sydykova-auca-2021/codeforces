#include <bits/stdc++.h>

void solve(){
    int x; // 12
    std::cin >> x;
    int steps;

    if(x % 5 == 0){
        steps = x / 5;
    } else if(x % 5 > 0){
        steps = (x / 5) + 1;
    }

    std::cout << steps;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
