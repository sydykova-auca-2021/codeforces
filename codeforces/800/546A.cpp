#include <bits/stdc++.h>

// k + 2k + 3k = k * (1 + 2 + 3)
// 1 + 2 + 3 = sum of consecutive nums

// sum = (w * (w + 1)) / 2

void solve(){
    int k,n,w;
    std::cin >> k >> n >> w;

    int total_cost = k * (w * (w + 1)) / 2;
    int borrow = total_cost - n;

    if(borrow > 0){
        std::cout << borrow << "\n";
    } else {
        std::cout << "0" << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
